#include "main.h"

/**
 * _strpbrk - finds first matching char
 * @s: destination string
 * @accept: src string
 *
 * Return: null if nothing found or pointer to found char
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, sizeS = 0, sizeAccept = 0;

	while (s[sizeS] != '\0')
	{
		sizeS++;
	}

	while (accept[sizeAccept] != '\0')
	{
		sizeAccept++;
	}

	for (i = 0; i < sizeS; i++)
	{
		for (j = 0; j < sizeAccept; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}

	}

	return (0);
}
