#include "main.h"
#include <stdio.h>


int is_prime_numberParam(int n, int i);
/**
 * is_prime_number - checks primality
 * @n: num
 *
 * Return: 1 if prime
 */
int is_prime_number(int n)
{
	int a = is_prime_numberParam(n, 2);

	return (a);
}

/**
 * is_prime_numberParam - checks primality
 * @n: max
 * @i: iterator
 *
 * Return: 1 if prime
 */
int is_prime_numberParam(int n, int i)
{
	if (n <= 2)
	{

		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	if (n % i == 0)
	{
		return (0);
	}

	if (i * i > n)
		return (1);

	return (is_prime_numberParam(n, i + 1));
}
