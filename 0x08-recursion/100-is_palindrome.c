#include "main.h"
#include "string.h"

int driver_pal(char *str, int s, int e);
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 *
 * Return: 1 if true, 0 if not
 */
int is_palindrome(char *s)
{
	int slen = 0, isPal = 0;

	slen = strlen(s);
	isPal = driver_pal(s, 0, slen - 1);

	return (isPal);
}

/**
 * driver_pal - drives is_palindrome
 * @str: takes a string str
 * @s: start index
 * @e: end index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int driver_pal(char *str, int s, int e)
{
	if (s == e)
		return (1);
	if (*(str + s) != *(str + e))
		return (0);
	if (s < e + 1)
		return (driver_pal(str, s + 1, e - 1));
	return (1);
}
