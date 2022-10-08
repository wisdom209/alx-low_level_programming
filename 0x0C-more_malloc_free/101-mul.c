#include "main.h"
#include "string.h"

void print_results(int slen, int result[]);
int check_digits(char *s);
/**
 * main - entry
 * @argc: num of commandline args + filename
 * @argv: array of args
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	char *num1 = argv[1], *num2 = argv[2];
	int i_n1, product, n2, i, j, len1 = 0, len2 = 0;
	int *result;

	if (argc != 3 || check_digits(num1) < 0 || check_digits(num2) < 0)
	{
		printf("Error\n");
		exit(98);
	}

	len1 = strlen(num1), len2 = strlen(num2);
	result = malloc((len1 + len2) * sizeof(int));

	if (result == NULL)
		return (0);
	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;
	if (len1 == 0 || len2 == 0)
		return (0);

	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0, i_n2 = 0, n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			product = n1 * n2 + result[i_n1 + i_n2] + carry;
			carry = product / 10;
			result[i_n1 + i_n2] = product % 10;
			i_n2++;
		}
		if (carry > 0)
			result[i_n1 + i_n2] += carry;
		i_n1++;
	}

	print_results(len1 + len2, result);
	printf("\n");
	return (0);
}

/**
 * print_results - prints product result
 * @slen: result length
 * @result: result array
 *
 * Return: nothing
 */
void print_results(int slen, int result[])
{
	int i, j;

	for (i = slen - 1; i >= 0; i--)
	{
		if (result[i] != 0)
		{
			for (j = i; j >= 0; j--)
				printf("%d", result[j]);
			break;
		}
	}
}

/**
 * check_digits - check if string has only numbers
 * @s: string to check
 *
 * Return: 1 if only numbers, -1 if otherwise
 */
int check_digits(char *s)
{
	int i = 0;
	int slen = strlen(s);

	for (i = 0; i < slen; i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{
			return (-1);
		}
	}
	return (1);
}
