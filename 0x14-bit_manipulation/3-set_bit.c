#include "main.h"

/**
 * set_bit - gets bit at an index
 * @n: num
 * @index: index
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
