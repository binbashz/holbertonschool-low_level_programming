file i/o



TASK O

--------------------------------------------------------------


TASK 1


int create_file(const char *filename, char *text_content);
Descripción de los parámetros de entrada:

filename: Puntero a una cadena de caracteres que representa el nombre del archivo a crear.
text_content: Puntero a una cadena de caracteres NULL-terminada que contiene el contenido de texto que se escribirá en el archivo.
Descripción de la salida:

La función devuelve un entero, donde 1 indica éxito y -1 indica fallo (no se pudo crear el archivo, no se pudo escribir en el archivo, escritura "falla", etc.).
Requisitos de la función:

El archivo creado debe tener permisos rw-------, lo que significa que solo el propietario del archivo tiene permisos de lectura y escritura.
Si el archivo ya existe, no se deben cambiar los permisos del archivo.
Si el archivo ya existe, se debe truncar para borrar su contenido previo antes de escribir el nuevo contenido proporcionado.
Si filename es NULL, la función debe retornar -1.
Si text_content es NULL, se debe crear un archivo vacío.
En resumen, la función create_file debe crear un archivo con el nombre especificado, establecer sus permisos como rw-------, truncar el archivo si ya existe,
escribir el contenido de texto proporcionado en el archivo y retornar 1 en caso de éxito y -1 en caso de fallo.
 Además, debe manejar casos especiales como filename o text_content siendo NULL.
