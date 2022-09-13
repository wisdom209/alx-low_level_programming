#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of num
 * @a: takes an int
 *
 * Return: last digit of a
 */
int print_last_digit(int a)
{
	int lastDigit;

	if (a < 0)
		a = -a;

	lastDigit = a % 10;
	_putchar(lastDigit + '0');

	return (lastDigit);
}
