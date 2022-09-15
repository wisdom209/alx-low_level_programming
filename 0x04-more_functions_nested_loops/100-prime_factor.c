#include <stdio.h>
/**
 * main - entry
 * @void: takes no function
 *
 * Return: returns nothing
 */
int main(void)
{

	unsigned int max, i, j, k, maxPrime;

	max = 612852475143;
	maxPrime = 0;

	for (i = 2; i <= max; i++)
	{
		for (j = 2; j <= max; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j && max % i == 0)
		{
			if (i > maxPrime)
			{
				maxPrime = i;
			}
		}
	}
	printf("%d", maxPrime);
	printf("\n");
}
