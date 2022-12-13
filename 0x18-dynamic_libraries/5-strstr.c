#include "main.h"

/**
 * _strstr - finds a substring
 * @haystack: src string to look for substring
 * @needle: matching string
 *
 * Return: address of match
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	int haystackLen = 0;
	int needleLen = 0;

	while (haystack[haystackLen] != '\0')
	{
		haystackLen++;
	}
	while (needle[needleLen] != '\0')
	{
		needleLen++;
	}

	for (i = 0; i < haystackLen; i++)
	{
		for (j = 0; j < needleLen; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (j == needleLen)
			return (&haystack[i]);
	}

	return (0);
}
