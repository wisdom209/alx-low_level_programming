#include "variadic_functions.h"

/**
 * print_strings - prints string args
 * @separator: string separator,
 * @n: number of strings to print
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr1;
	unsigned int i = 0;

	va_start(ptr1, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(ptr1, char *);

		if (s == NULL)
			s = "(nil)";

		if (i == n - 1)
			printf("%s", s);
		else
			printf("%s%s", s, separator);
	}

	printf("\n");
}
