#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 save for 4 and 2
 * @void: takes no args
 *
 * Return: returns nothing
 */
void print_most_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
