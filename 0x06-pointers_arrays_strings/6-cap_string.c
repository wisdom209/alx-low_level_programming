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
	char sp[] = {';', ' ', '\n', '.', '!', '?', '"', '(', ')',
		'{', '}', ',', '\t', '\0'};

	int spSize = sizeof(sp) / sizeof(char);
	int sizeS = findStringSize(s);

	for (i = 0; i < sizeS; i++)
	{
		for (j = 0; j < spSize; j++)
		{
			if (s[i] == sp[j])
			{
				int c = i + 1;

				while (!((s[c] >= 'a' && s[c] <= 'z') || (s[c] >= 'A' && s[c] <= 'Z')))
				{
					c++;
				}
				if (s[c] > 90)
					s[c] = 65 + s[c] - 'a';
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
