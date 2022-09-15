#include "main.h"
/**
 * more_numbers - prints 0 to 14 ten times
 * @void: takes no args
 *
 * Return: returns nothing
 */
void more_numbers(void)
{
	int i, j, k, firstDigit, secondDigit;

	int twoDigitArray[3];

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			firstDigit = j / 10;
			secondDigit = j % 10;

			if (j < 10)
			{
				_putchar(secondDigit + '0');
			}
			else
			{
				twoDigitArray[0] = firstDigit;
				twoDigitArray[1] = secondDigit;

				for (k = 0; k < 2; k++)
				{
					_putchar(twoDigitArray[k] + '0');
				}
			}
		}
		_putchar('\n');
	}
}

