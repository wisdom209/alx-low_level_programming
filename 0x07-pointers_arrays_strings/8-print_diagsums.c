#include "main.h"

/**
 * print_diagsum - prints the sum of both diagonals
 * @a: multidimensional array
 * @size: size of the array
 *
 * Return - nothing
 */
void print_diagsums(int *a, int size)
{
	/* get the sum of forward diag */
	int sumFrwd = 0, sumRev = 0;
	int i = 0, j = 0;

	for (i = 0; i < size; i++)
	{

		sumFrwd = sumFrwd + *(a + (size * i + i));
	}

	/* get the sum of reverse diag */
	i = 0;

	for (j = size - 1; j >= 0; j--)
	{
		sumRev = sumRev + *(a + (size * i + j));
		i++;
	}

	printf("%d, %d\n", sumFrwd, sumRev);
}

