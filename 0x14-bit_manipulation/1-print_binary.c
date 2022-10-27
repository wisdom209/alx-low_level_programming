#include "main.h"

/**
 * print_binary - prints binary conversion of n
 * @n: number to print
 *
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int i = 0, j = 0, flag_first_zero = 0;

	for (i = 63; i >= 0; i--)
	{
		j = n >> i;

		if (j & 1)
			flag_first_zero = 1;

		if (flag_first_zero)
		{
			if (j & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
	if (flag_first_zero == 0)
		_putchar('0');
}

