#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints bytes in hexadecimal
 * @b: buffer to print
 * @size: size of buffer to print
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0, k = 0;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < size; i = i + 10)
		{
			if (i % 10 == 0)
			{
				printf("%08x: ", i);
				for (j = i; j < i + 10; j = j + 2)
				{
				if (j < size)
					printf("%02x%02x", b[j], b[j + 1]);
				else
				{
					printf(" ");
					for (k = j; k < i + 10; k++)
					{
						printf(" ");
					}
				}
				printf(" ");
				}
				for (k = i; k < i + 10; k++)
				{
					if (isprint(b[k]) == 0)
						printf(".");
					else
						printf("%c", b[k]);
				}
				printf("\n");
			}
		}
	}
}


