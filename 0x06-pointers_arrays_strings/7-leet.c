int findStringSize(char *s);
/**
 * leet - 1377 encryption of strings
 * @s: string to encode
 *
 * Return: encoded string s
 */
char *leet(char *s)
{
	int sCount = findStringSize(s);
	int i, j;

	char ref[5][4] = {{'a', 'A', '4', '\0'},
		{'e', 'E', '3', '\0'}, {'o', '0', '0', '\0'},
		{'t', 'T', '7', '\0'}, {'l', 'L', '1', '\0'}};

	for (i = 0; i < sCount; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == ref[j][0] || s[i] == ref[j][1])
			{
				s[i] = ref[j][2];
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
