#include "dog.h"

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new location
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	puppy = malloc(sizeof(dog_t));
	if (!puppy)
		return (NULL);

	puppy->name = malloc(sizeof(name));

	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}

	puppy->owner = malloc(sizeof(owner));
	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	puppy->name = _strcpy(puppy->name, name);
	puppy->owner = _strcpy(puppy->owner, owner);
	puppy->age = age;

	return (puppy);
}
