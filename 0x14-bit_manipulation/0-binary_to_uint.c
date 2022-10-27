#include "main.h"

unsigned int convert_bin_to_dec(const char *b);
/**
 * binary_to_uint - binary to uint
 * @b: binary string
 *
 * Return: int
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0, a = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}

	a = convert_bin_to_dec(b);

	return (a);
}

/**
 * convert_bin_to_dec - convert bin to dec
 * @s: binary string
 *
 * Return: unsigned int
*/
unsigned int convert_bin_to_dec(const char *s)
{
	int i = 0, j = 0, raise = 0, sum = 0;

	while (s[i] != '\0')
		i++;

	for (j = i - 1; j >= 0; j--)
	{
		sum += (1 << raise) * (s[j] - '0');
		raise++;
	}

	return (sum);
}

