int findStringSize(char *s);
/**
 * _strcmp - compares two strings, like strcmp
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if same, negative if s1 > 2 and vice versa
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, s2C, c = 0;

	c = findStringSize(s1);
	s2C = findStringSize(s2);

	if (s2C == c)
	{
		for (i = 0; i < c; i++)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			if (i == c - 1 && s1[i] == s2[i])
				return (0);
		}
	}
	else if (s2C > c)
	{
		for (j = 0; j < c; j++)
		{
			if (s1[j] != s2[j])
				return (s1[j] - s2[j]);
		}
		return (-s2[c]);
	}
	else
	{
		for (j = 0; j < s2C; j++)
		{
			if (s1[j] != s2[j])
				return (s1[j] - s2[j]);
		}
		return (s1[s2C]);
	}
	return (0);
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
