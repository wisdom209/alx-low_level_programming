#include "main.h"
#include "_putchar.c"

/**
  * main - prints _putcha
  * @void: no arg
  *
  * Return: 0 if successful
  */
int main(void)
{
	int i;
	char *p;

	i = 0;
	p = "_putchar";

	while (p[i] != '\0')
	{
		_putchar(p[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
