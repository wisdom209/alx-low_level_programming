/**
 * _strcat - concatenates strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int destC = 0;
	int srcC = 0;
	int i = 0;

	while (dest[destC] != '\0')
	{
		destC++;
	}

	while (src[srcC] != '\0')
	{
		srcC++;
	}

	for (i = 0; i < srcC; i++)
	{
		dest[destC] = src[i];

		destC++;
	}

	dest[destC] = '\0';

	return (dest);
}
