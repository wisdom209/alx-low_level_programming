#include "main.h"

/**
 * _realloc - reallocates space
 * @ptr: old block
 * @old_size: old size
 * @new_size: new size
 *
 * Return: pointer to new block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *newPtr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		if (!newPtr)
			return (NULL);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size && (ptr != NULL))
	{
		newPtr = malloc(new_size);

		if (!newPtr)
			return (NULL);

		for (i = 0; i < old_size; i++)
		{
			newPtr[i] = ((char *)ptr)[i];
		}

		free(ptr);
	}
	return (newPtr);
}
