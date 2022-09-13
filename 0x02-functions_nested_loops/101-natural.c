#include <stdio.h>

/**
 * main - entry
 * @void: takes no args
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
