#include <stdio.h>

/**
 * main - entry
 * @void: takes no args
 *
 * Return: 0 if successful
 */
int main(void)
{
	double i;
	double end;
	double t1;
	double t2;
	double nextTerm;

	end = 98;
	t1 = 1;
	t2 = 2;

	printf("%.0f, %.0f, ", t1, t2);

	for (i = 0; i < end; i++)
	{

		nextTerm = t1 + t2;
		if (i == end - 1)
		{
			printf("%.0f\n", nextTerm);
		}
		else
		{
			printf("%.0f, ", nextTerm);
		}

		t1 = t2;
		t2 = nextTerm;
	}
	return (0);
}
