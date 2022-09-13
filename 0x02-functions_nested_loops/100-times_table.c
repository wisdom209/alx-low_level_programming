#include "main.h"
/**
 * print_times_table - print time tables to given num
 * @void: takes an integer
 *
 * Return: void
 */
void print_times_table(int n)
{

	int i;
	int j;
	int product;
	int firstDigit;
	int secondDigit;
	int thirdDigit;

	if (n < 16 && n > -1)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;

				if (j == 0)
				{
					_putchar('0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{

					if (product >= 100)
					{
						firstDigit = product / 100;
						secondDigit = (product % 100) / 10;
						thirdDigit = (product % 10);
						_putchar(firstDigit + '0');
						_putchar(secondDigit + '0');
						_putchar(thirdDigit + '0');
						if (j != n)
						{
							_putchar(',');
							_putchar(' ');
						}
					}
					else if (product > 9 && product < 100)
					{
						secondDigit = product / 10;
						thirdDigit = (product % 10);

						_putchar(' ');
						_putchar(secondDigit + '0');
						_putchar(thirdDigit + '0');
						if (j != n)
						{
							_putchar(',');
							_putchar(' ');
						}
					}
					else
					{

						thirdDigit = (product % 10);

						_putchar(' ');
						_putchar(' ');
						_putchar(thirdDigit + '0');
						if (j != n)
						{
							_putchar(',');
							_putchar(' ');
						}
					}
				}
			}
			_putchar('\n');
		}
	}
}
