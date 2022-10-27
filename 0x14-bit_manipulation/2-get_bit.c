#include "main.h"

/**
 * get_bit - gets bit at an indes
 * @n: num
 * @index: index
 *
 * Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	n = n & (1 << index);

	if (n > 0)
		return (1);
	else
		return (0);
}

