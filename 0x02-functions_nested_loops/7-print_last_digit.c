#include "main.h"

/**
 * print_last_digit - gets the last digit of a num
 * @a: takes an int
 *
 * Return: last digit of a
 */
int print_last_digit(int a)
{
	int lastDigit;

	lastDigit = a % 10;
	_putchar(lastDigit + '0');

	return (lastDigit);
}
