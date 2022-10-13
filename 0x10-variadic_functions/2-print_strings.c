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
	va_list ptr2;

	unsigned int one_null = 0;
	unsigned int i = 0;

	va_start(ptr1, n);

	va_copy(ptr2, ptr1);

	for (i = 0; i < n; i++)
	{
		if (!va_arg(ptr1, char *))
			one_null = 1;
	}

	va_end(ptr1);

	if (separator == NULL)
		separator = "";

	if (!one_null)
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
				printf("%s", va_arg(ptr2, char *));
			else
				printf("%s%s", va_arg(ptr2, char *), separator);
		}
	}
	else
		printf("nil");

	printf("\n");
}
