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
	int filler = 0, total = 0, i = 0;

	char *p;
	void *ptr;

	total = size * nmemb;

	ptr = malloc(size * nmemb);

	if (!ptr)
		return (NULL);

	p = ptr;

	for (i = 0; i < total; i++)
	{
		p[i] = filler;
		p++;
	}

	return (ptr);
}
