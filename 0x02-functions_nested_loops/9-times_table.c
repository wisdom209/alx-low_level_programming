#include "main.h"

/**
 * times_table - prints the 9 times table
 * @void: takes no args
 *
 * Return: returns nothing
 */
void times_table(void)
{
	int i;
	int j;
	int product;
	int productUnit;
	int productTens;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				productUnit = product % 10;
				productTens = product / 10;

				_putchar(productTens + '0');
				_putchar(productUnit + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			_putchar('\n');
		}
	}
}
