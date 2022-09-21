/**
 * _strncpy- copys a string to another for only n chars
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int destC = 0;
	int srcC = 0;
	int i;

	while (dest[destC] != '\0')
	{
		destC++;
	}

	while (src[srcC] != '\0')
	{
		srcC++;
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
