#include "main.h"
/**
 * _strrev - reverses a string
 * @s: string param
 *
 * Return: nothing
 */
void *_strrev(char *s)
{
	int i, c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c / 2; i++)
	{
		int j = c - i - 1;
		char temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
	}
}

/**
 * _strlen - gets length of a string
 * @s: string param
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * infinite_add - adds two strings
 * @n1: string param
 * @n2: string param
 * @r: buffer to hold result
 * @size_r: max size of buffer
 * Return: sum of strings
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ln1 = _strlen(n1);
	int ln2 = _strlen(n2);

	ln1--;
	ln2--;

	int sum, carry, val1, val2, digits = 0;

	if (ln1 >= size_r || ln2 >= size_r)
		return (0);

	while (ln1 >= 0 || ln2 >= 0 || carry)
	{
		if (ln1 < 0)
			val1 = 0;
		else
			val1 = *(n1 + ln1) - '0';
		if (ln2 < 0)
			val2 = 0;
		else
			val2 = *(n2 + ln2) - '0';

		sum = (val1 + val2 + carry) % 10;
		carry = (val1 + val2) / 10;
		*(r + digits) = sum + '0';

		digits++;
		ln1--;
		ln2--;
	}

	if (digits >= size_r)
		return (0);

	*(r + digits) = '\0';
	_strrev(r);
	return (r);
}
