#include "main.h"

/**
 * flip_bits - counts bit flips for n to become b
 * @n: param 1
 * @m: param 2
 *
 * Return: int
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flips = 0, t1 = 0, t2 = 0;

	while (n > 0 || m > 0)
	{
		t1 = n & 1;
		t2 = m & 1;

		if (t1 != t2)
			flips++;

		n = n >> 1;
		m = m >> 1;
	}

	return (flips);
}

