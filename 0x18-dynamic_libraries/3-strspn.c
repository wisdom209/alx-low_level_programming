#include "main.h"

/**
 * _strspn - gets the spn of same in accept
 * @s: destination string
 * @accept: source string
 *
 * Return: no of similar values
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int sizeS = 0, sAccept = 0, i = 0, j = 0, k = 0;

	while (s[sizeS] != '\0')
	{
		sizeS++;
	}

	while (accept[sAccept] != '\0')
	{
		sAccept++;
	}

	for (i = 0; i < sizeS; i++)
	{
		unsigned int found = 0;

		for (j = 0; j < sAccept; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 1)
			k++;
		else
			return (k);
	}

	return (k);
}

