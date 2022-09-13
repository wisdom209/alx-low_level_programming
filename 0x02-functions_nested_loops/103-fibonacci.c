#include <stdio.h>

/**
 * main - entry
 * @void: takes no args
 *
 * Return: 0 if successful
 */
int main(void)
{
	long double t1;
	long double t2;
	long nextTerm;
	long max;

	int sum;

	t1 = 0;
	t2 = 1;
	nextTerm = 1;
	max = 4000000;
	sum = 0;

	while (nextTerm < max)
	{
		if ((nextTerm % 2) == 0)
		{
			sum = nextTerm + sum;
		}
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	printf("%d\n", sum);

	return (0);
}
