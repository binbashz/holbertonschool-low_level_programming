

/**
 * main - funtion cp
 * @argc: number of arguments
 * @argv: pointer to an array of arguments
 * Return: 0
 */

#include "main.h"

int main(int argc, char **argv)
{
	char *buffered;

	int from;

	int to;

	int r = 0;

	int w;

	buffered = malloc(sizeof(char) * 1024);

	if (buffered == NULL)
		return (97);

	if (argc < 3)
	{
		printf("Usage: cp file_from file_to\n");
		return (97);
	}
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0700);

	w = write(to, buffered, r);
	r = read(from, buffered, sizeof(buffered));

	if (from == -1)
	{
		printf("Error: Can't read from file NAME_OF_THE_FILE\n");
		return (98);
	}
	if (w == -1 || to == -1)
	{
		free(buffered);
		printf("Error: Can't write to NAME_OF_THE_FILE\n");
		return (99);
	}
	close(from);
	close(to);
	return (0);
}
