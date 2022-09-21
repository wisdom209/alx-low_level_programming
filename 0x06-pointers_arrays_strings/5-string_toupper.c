int findStringSize(char *s);

/**
 * string_toupper - changes lowercase to uppercase
 * @s: takes a string s
 *
 * Return: string with lower case now uppercase
 */
char *string_toupper(char *s)
{
	int i;

	int sizeS;

	sizeS = findStringSize(s);

	for (i = 0; i < sizeS; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = 65 + s[i] - 97;
		}
	}

	return (s);
}

/**
 * findStringSize - gets string size
 * @s: string param
 *
 * Return: string size
 */
int findStringSize(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
