#include "dog.h"
/**
 * free_dog - free space occupied by dog
 * @d: dog instance
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
