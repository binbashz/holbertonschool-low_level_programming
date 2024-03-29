#include "main.h"
#include <string.h>
/**
 * * append_text_to_file - append text at the end of file
 * * @filename: name of the file
 * * @text_content: the NULL terminated string to add at the end of the file
 * *
 * * Return: 1 on success and -1 on failure
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
	return (-1);
	}

	file = fopen(filename, "a");
	if (file == NULL)
	{
	return (-1);
	}

	if (text_content != NULL)
	{
	fputs(text_content, file);
	}

	fclose(file);

	return (1);
}
