#include "main.h"

/**
 * main - entry point
 * @argc: number of args plus file name
 * @argv: array of args
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[] __attribute__((__unused__)))
{
	int numOfArgs = argc - 1;
	int i = 0;

	if (argc == 1)
	{
		return (0);
	}

	for (i = 0; i < numOfArgs; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

