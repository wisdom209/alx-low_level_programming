#include "main.h"
/**
 * _strlen_recursion - finds string leng
 * @s: string to find length
 *
 * Return: returns nothing
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (*s + _strlen_recursion(s + 1));
}
