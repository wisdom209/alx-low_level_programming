#include "variadic_functions.h"
/**
 * sum_them_all - sums args
 * @n: number of args to sum
 *
 * Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;

	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	return (sum);
}
