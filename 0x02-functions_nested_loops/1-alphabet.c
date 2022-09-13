#include "_putchar.c"
/**
 * print_alphabet - prints a_z
 * @void: takes no args
 *
 * Return: returns nothing
 */

void print_alphabet(void)
{	
	int i = 97;
	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
