int findStringSize(char *s);
/**
 * leet - 1377 encryption of strings
 * @s: string to encode
 *
 * Return: encoded string s
 */
char *leet(char *s)
{
	int i, j = 0;
	char ref[][4] = {{'a', 'A', '4'}, {'e', 'E', '3'}, {'o', 'O', '0'},
		{'t', 'T', '7'}, {'l', 'L', '1'}};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == ref[j][0] || s[i] == ref[j][1])
			{
				s[i] = ref[j][2];
			}
		}
		i++;
	}

	return (s);
}

