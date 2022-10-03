#include "main.h"

int _strlen(int row, char **s);
/**
 * argstostr - concatenates command line args
 * @ac: num of args
 * @av: array of strings
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, count;
	char *newstr;

	int adder = 0;
	int size = _strlen(ac, av);

	if (ac == 0 || av == NULL)
		return (NULL);

	newstr = (char *)malloc(sizeof(char) * size + 1);

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		count = 0;
		while (av[i][count] != '\0')
		{
			newstr[adder] = av[i][count];
			count++;
			adder++;
		}
		newstr[adder] = '\n';
		adder++;
	}

	newstr[size] = '\0';

	return (newstr);
}

/**
 * _strlen - get string length
 * @row: no of rows in 2D arr
 * @s: 2d array of strings
 *
 * Return: length of all chars added
 */
int _strlen(int row, char **s)
{
	int size = 0, i = 0, j = 0;

	for (i = 0; i < row; i++)
	{
		if (s[i])
		{
			j = 0;
			while (s[i][j] != '\0')
			{
				j++;
			}

			size = size + j;
		}
		size++;
	}

	return (size);
}
