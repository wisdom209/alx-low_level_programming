#include <stdio.h>
#include <unistd.h>

/**
* main - Entry point of programme
* @void: This function has no parameters
*
* Description: Prints out to the standard error
* Return: 0 if successful
*/
int main(void)
{	char buf[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, buf, sizeof(buf));
	return (1);
}
