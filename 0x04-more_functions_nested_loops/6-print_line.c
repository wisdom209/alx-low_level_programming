#include "main.h"

/**
 * print_line - prints a straight line
 * @n: takes an arg for number of _ to print
 *
 * Return: nothing
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
