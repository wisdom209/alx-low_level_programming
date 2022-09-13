#include "main.h"

/**
 * _isalpha - does as it says
 * @c: takes an int
 *
 * Return: returns 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
