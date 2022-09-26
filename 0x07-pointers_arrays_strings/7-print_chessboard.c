#include "main.h"

/**
 * print_chessboard - prints a 2D array chessboard
 * @a: 2D array chessboard param
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			char temp = a[i][j];

			_putchar(temp);
		}
		_putchar('\n');
	}
}


