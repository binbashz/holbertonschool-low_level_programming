/**
 * create_file - creates a file
 * @text_content : NULL termiante string to write the file
 * @filename : name of the file create
 * Return: 1 on succses
 */


#include "main.h"


int create_file(const char *filename, char *text_content)
	{
	int file_descriptor, write_size;

	if (filename == NULL)  /* Verificar si el nombre de archivo es NULL*/
	return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
/* Abrir el archivo con los flags O_WRONLY*/
/*  (solo escritura), O_CREAT (crear si no existe)*/
/* y O_TRUNC (truncar si ya existe), con permisos 0600 (rw-------) */
	if (file_descriptor == -1)
	/* Verificar si no se pudo abrir o crear el archivo*/
	return (-1);
if (text_content != NULL)
/* Verificar si hay contenido de texto para escribir*/
	{
	int text_length = 0;

	while (text_content[text_length] != '\0')
	/* Calcular la longitud del contenido de texto */
	text_length++;

	write_size = write(file_descriptor, text_content, text_length);
	/* Escribir el contenido de texto en el archivo */
	if (write_size == -1)  /* Verificar si no se pudo escribir en el archivo*/
	{
	close(file_descriptor);  /* Cerrar el archivo antes de retornar*/
	return (-1);
	}
	}
	close(file_descriptor);  /* Cerrar el archivo*/

	return (1);  /* Retornar éxito (1)*/
}
