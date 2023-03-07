
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: integer less than, equal , or greater
 * than zero if s1 is found, respectively, to be less than,
 * to match, or be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int function = 0;

	while (s1[function] && s2[function] && s1[function] == s2[function])
	{
		function++;
	}

	return (s1[function] - s2[function]);
}

