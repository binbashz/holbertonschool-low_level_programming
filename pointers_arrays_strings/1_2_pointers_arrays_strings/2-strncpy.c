

/**
 * _strncpy - copies a string up to n bytes
 * @dest: destination string
 * @src: source string
 * @n: maximum number of the bytes to copy
 *
 * Return: pointer to the destination string
 */

/*
 *  this function copies a string from
 * source string "src" to
 * a destination string "dest",
 * with a character limit specified by the value "n"
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
