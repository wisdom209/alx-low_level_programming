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
	int start;

	start = 97;

	while (start <= 122)
	{
		putchar(start);
		start++;
	}
	putchar('\n');

	return (0);
}
