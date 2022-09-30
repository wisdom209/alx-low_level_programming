#include "main.h"
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
	int a = 0, b = 0, c = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = b * a;

	printf("%d\n", c);

	return (0);
}

