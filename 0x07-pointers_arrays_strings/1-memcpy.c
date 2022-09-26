#include "main.h"

/**
 * _memcpy - copies src to dest string
 * @dest: destination string
 * @src: source string
 * @n: how many bytes to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	*(dest + n) = '\0';

	return (dest);
}

