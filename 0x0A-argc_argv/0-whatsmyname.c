#include "main.h"

/**
 * main - entry point
 * @argc: number of args plus file name
 * @argv: array of args
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	char *filename = argv[0];

	int i = 0;

	while (filename[i] != '\0')
	{
		_putchar(filename[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}

