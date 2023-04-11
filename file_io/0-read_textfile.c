


/**
 * read_textfile - function that reads a text file and prints it
 * @filename: txt file
 * @letters: size of filename
 * Return: write_size
 */

#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, size, write_size;

	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY, O_CREAT, 0600);

	size = read(file_descriptor, buffer, letters);

	write_size = write(STDOUT_FILENO, buffer, size);

	if (write_size == -1 || size == -1 || file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}
	close(file_descriptor);
	return (write_size);
}
