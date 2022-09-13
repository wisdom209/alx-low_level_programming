#include "main.h"
/* #include "_putchar.c" */

/**
 * print_alphabet_x10 - does as it says
 * @void: takes no args
 *
 * Return: returns nothing
 */

void print_alphabet_x10(void)
{

	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

