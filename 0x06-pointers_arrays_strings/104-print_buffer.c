#include "main.h"
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
	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (int i = 0; i < size; i = i + 10)
		{
			if (i % 10 == 0)
			{
				printf("%08x: ", i);
				for (int j = i; j < i + 10; j = j + 2)
				{
					if (j < size)
						printf("%02x%02x", b[j], b[j + 1]);
					else
					{

					printf(" ");
					for (int k = j; k < i + 10; k++)
					{
						printf(" ");
					}

					}
					printf(" ");
				}
				for (int k = i; k < i + 10; k++)
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
