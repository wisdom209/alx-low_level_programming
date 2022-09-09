#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * @void: no args
 *
 * Return: 0 if successful
 */

int main(void)
{
	int num;
	int alphs;

	num = 48;
	alphs = 97;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	while (alphs <= 101)
	{
		putchar(alphs);
		alphs++;
	}
	putchar('\n');

	return (0);
}
