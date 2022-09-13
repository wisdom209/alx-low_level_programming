#include "main.h"

void print_three_digits(int prod, int iter, int end);
void print_two_digits(int prod, int iter, int end);
void print_one_digit(int prod, int iter, int end);
void print_mult_table(int prod, int iter, int end);
/**
 * print_times_table - print time tables to given num
 * @n: takes an integer
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 16 && n > -1)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				print_mult_table(product, j, n);
			}
		}
	}
}

/**
 * print_three_digits - print a three digit num
 * @prod: product of two numbers
 * @iter: an iterator
 * @end: end point of iterator
 *
 * Return: void
 */
void print_three_digits(int prod, int iter, int end)
{
	int a, b, c;

	a = prod / 100;
	b = (prod % 100) / 10;
	c = (prod % 10);
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(c + '0');
	if (iter != end)
	{
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar('\n');
	}
}

/**
 * print_two_digits - print a two digit num
 * @prod: product of two numbers
 * @iter: an iterator
 * @end: end point of iterator
 *
 * Return: void
 */
void print_two_digits(int prod, int iter, int end)
{
	int secondDigit;
	int thirdDigit;

	secondDigit = prod / 10;
	thirdDigit = (prod % 10);
	_putchar(' ');
	_putchar(secondDigit + '0');
	_putchar(thirdDigit + '0');
	if (iter != end)
	{
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar('\n');
	}
}

/**
 * print_one_digit - print a one digit num
 * @prod: product of two numbers
 * @iter: an iterator
 * @end: end point of iterator
 *
 * Return: void
 */
void print_one_digit(int prod, int iter, int end)
{
	int thirdDigit;

	thirdDigit = (prod % 10);
	_putchar(' ');
	_putchar(' ');
	_putchar(thirdDigit + '0');
	if (iter != end)
	{
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar('\n');
	}
}

/**
 * print_mult_table - prints times table
 * @prod: product
 * @iter: an iterator
 * @end: end point of iter
 */
void print_mult_table(int prod, int iter, int end)
{
	if (iter == 0)
	{
		if (end == 0)
		{
			_putchar('0');
			_putchar('\n');
		}
		else
		{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		}
	}
	else
	{
		if (prod >= 100)
		{
			print_three_digits(prod, iter, end);
		}
		else if (prod > 9 && prod < 100)
		{
			print_two_digits(prod, iter, end);
		}
		else
		{
			print_one_digit(prod, iter, end);
		}
	}
}
