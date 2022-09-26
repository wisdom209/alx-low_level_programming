#include "main.h"

/**
 * _strchr - finds character in a string
 * @s: string to search
 * @c: character to find
 *
 * Return: null if not found, pointer to c if found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (0);
}
