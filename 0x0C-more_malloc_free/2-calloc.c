#include "main.h"

/**
 * _calloc - allocates memory like calloc
 * @nmemb: number of members
 * @size: size of each member
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(size * nmemb);
	int filler = 0;
	int total = size * nmemb;
	int i = 0;
	char *p = ptr;

	if (!ptr)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		p[i] = filler;
		p++;
	}

	return (ptr);
}
