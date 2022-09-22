int findStringSize(char *s);

/**
 * cap_string - capitalize a char after punctuations
 * @s: takes a string param
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i, j;
	char sp[] = {';', ',', ' ', '\n', '.', '!', '?',
		'"', '(', ')', '{', '}', '\t'};

	int spSize = sizeof(sp) / sizeof(char);
	int sizeS = findStringSize(s);

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = 65 + s[0] - 'a';
	}

	for (i = 0; i < sizeS; i++)
	{
		for (j = 0; j < spSize; j++)
		{
			if (s[i - 1] == sp[j] && (s[i] >= 97 && s[i] <= 122))
			{
				s[i] = 65 + s[i] - 'a';
			}
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
