#include "main.h"

/**
 * jack_bauer - prints 24 hours
 * @void: takes no args
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hoursTens;
	int hoursUnits;
	int minTens;
	int minUnits;
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			hoursTens = i / 10;
			hoursUnits = i % 10;
			minTens = j / 10;
			minUnits = j % 10;

			_putchar(hoursTens + '0');
			_putchar(hoursUnits + '0');
			_putchar(':');
			_putchar(minTens + '0');
			_putchar(minUnits + '0');
			_putchar('\n');
		}
	}
}
