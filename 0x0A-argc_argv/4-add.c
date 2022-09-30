#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of args plus file name
 * @argv: array of args
 *
 * Return: 0 if successful
 */
int main(int argc __attribute__((__unused__)),
		 char *argv[] __attribute__((__unused__)))
{
	int i = 0, sum = 0, j = 0;
	char *strcheck = "null";

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		strcheck = argv[i];
		j = 0;

		while (strcheck[j] != '\0')
		{
			if (!isdigit(strcheck[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
	}
	for (i = 0; i < argc; i++)
	{
		int a = atoi(argv[i]);

		sum = sum + a;
	}

	printf("%d\n", sum);

	return (0);
}

