int findStringSize(char *s);
/**
 * rot13 - rot13 encryption of strings
 * @s: string to encrypt
 *
 * Return: encrypted string
 */
char *rot13(char *s)
{
	char arrTable[][3] = {{'a', 'n', '\0'}, {'b', 'o', '\0'},
		{'c', 'p', '\0'}, {'d', 'q', '\0'}, {'e', 'r', '\0'},
		{'f', 's', '\0'}, {'g', 't', '\0'}, {'h', 'u', '\0'},
		{'i', 'v', '\0'}, {'j', 'w', '\0'}, {'k', 'x', '\0'},
		{'l', 'y', '\0'}, {'m', 'z', '\0'}, {'n', 'a', '\0'},
		{'o', 'b', '\0'}, {'p', 'c', '\0'}, {'q', 'd', '\0'},
		{'r', 'e', '\0'}, {'s', 'f', '\0'}, {'t', 'g', '\0'},
		{'u', 'h', '\0'}, {'v', 'i', '\0'}, {'w', 'j', '\0'},
		{'x', 'k', '\0'}, {'y', 'l', '\0'}, {'z', 'm', '\0'},
		{'A', 'N', '\0'}, {'B', 'O', '\0'}, {'C', 'P', '\0'},
		{'D', 'Q', '\0'}, {'E', 'R', '\0'}, {'F', 'S', '\0'},
		{'G', 'T', '\0'}, {'H', 'U', '\0'}, {'I', 'V', '\0'},
		{'J', 'W', '\0'}, {'K', 'X', '\0'}, {'L', 'Y', '\0'},
		{'M', 'Z', '\0'}, {'N', 'A', '\0'}, {'O', 'B', '\0'},
		{'P', 'C', '\0'}, {'Q', 'D', '\0'}, {'R', 'E', '\0'},
		{'S', 'F', '\0'}, {'T', 'G', '\0'}, {'U', 'H', '\0'},
		{'V', 'I', '\0'}, {'W', 'J', '\0'}, {'X', 'K', '\0'},
		{'Y', 'L', '\0'}, {'Z', 'M', '\0'}};

	int sCount = findStringSize(s);
	int i, j;

	for (i = 0; i < sCount; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == arrTable[j][0])
			{
				s[i] = arrTable[j][1];
				break;
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

