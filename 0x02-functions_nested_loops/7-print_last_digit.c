#include "main.h"

/**
 * print_last_digit - prints last digit of num
 * @a: takes an int
 *
 * Return: last digit of a
 */
int print_last_digit(int a)
{
	int lastDigit;

	lastDigit = a % 10;

	if (lastDigit < 0)
		lastDigit = -lastDigit;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
