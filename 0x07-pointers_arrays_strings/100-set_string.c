#include "main.h"

/**
 * set_string - change address of a double pointer
 * @s: string to change address
 * @to: string to change address to
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
