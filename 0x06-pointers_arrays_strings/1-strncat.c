/**
 * _strncat - concatenates two strings to a size
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destC = 0;
	int srcC = 0;
	int i = 0;
	int newSize = 0;

	while (dest[destC] != '\0')
	{
		destC++;
	}

	while (src[srcC] != '\0')
	{
		srcC++;
	}

	if (n > srcC)
		n = srcC;

	newSize = destC + n;

	while (i < n)
	{
		if (destC < newSize)
		{
			dest[destC] = src[i];
			destC++;
		}
		i++;
	}

	return (dest);
}
