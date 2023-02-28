/*trcpy - copies the string pointed to by src,
 * including null byte (\0), to the buffer pointed
 * to by dest.
 *
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j  = 0;

	
	while (ptr[j] != '\0')
	{
		
		dest[j] = ptr[j];
		j++;
	}

	

	return (dest);
}
