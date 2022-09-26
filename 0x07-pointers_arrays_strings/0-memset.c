#include "main.h"

/**
 * _memset - just like memset function
 * @s: string
 * @b: one byte character
 * @n: number of bytes to copy
 *
 * Return: replaced string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
