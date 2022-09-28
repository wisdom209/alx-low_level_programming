#include "main.h"

/**
 * factorial - gets a numbers factorial
 * @n: number param
 *
 * Return: n!
 */
int factorial(int n)
{
	if (n < 0)
		return(-1);
	else
	{
		if (n == 0)
			return (1);
		return (n * factorial(n - 1));
	}
}
