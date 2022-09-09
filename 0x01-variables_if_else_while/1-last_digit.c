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
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);

	if (lastDigit == 0)
		printf("Last digit is %d is 0 and is 0\n", n);

	if (lastDigit < 6 && lastDigit != 0)
		printf("Last digit of of %d is %d and not 0\n", n, lastDigit);
	return (0);
}
