/**
 * leet - 1377 encryption of strings
 * @s: string to encode
 *
 * Return: encoded string s
 */
char *leet(char *s)
{
	int i, j = 0;
	char ref[] = "aeotlAEOTL";
	char dest[] = "4307143071";

	while (s[i] != '\0')
	{
		j = 0;

		while (ref[j] != '\0')
		{
			if (s[i] == ref[j])
			{

				s[i] = dest[j];
			}
			j++;
		}

		i++;
	}

	return (s);
}

