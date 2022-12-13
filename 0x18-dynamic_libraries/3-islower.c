#include "main.h"
/**
* _islower - checks if int is lowercase
* @c: an int value to check
*
* Description: Does as function name
* Return: returns 1 if true, 0 if false
*/
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
