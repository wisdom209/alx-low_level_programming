#include <stdio.h>

/**
 * main - entry
 * @void: takes no args
 *
 * Return: 0 if successful
 */
int main(void)
{
	long t1;
	long t2;
	long nextTerm;
	int i;
	int end;

	t1 = 0;
	t2 = 1;
	end = 50;

	for (i = 0; i < end; i++)
	{
		nextTerm = t1 + t2;
		if (i == end - 1)
		{
			printf("%lu", nextTerm);
		}
		else
		{
			printf("%lu, ", nextTerm);
		}

		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n");

	return (0);
}
