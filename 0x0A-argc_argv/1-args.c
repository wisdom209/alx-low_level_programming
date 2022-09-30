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

	printf("%d\n", numOfArgs);

	return (0);
}

