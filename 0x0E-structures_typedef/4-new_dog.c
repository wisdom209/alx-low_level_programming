#include "dog.h"
#include "string.h"

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
	dog_t *puppy = (dog_t *)malloc(sizeof(dog_t));

	if (name == NULL && owner == NULL)
		return (NULL);

	if (!puppy)
	{
		free(puppy);
		return (NULL);
	}

	puppy->name = malloc(sizeof(name));
	if (!puppy->name)
	{
		free(puppy->name);
		return (NULL);
	}

	strcpy(puppy->name, name);

	puppy->owner = malloc(sizeof(owner));
	if (!puppy->owner)
	{
		free(puppy->owner);
		free(puppy);
		return (NULL);
	}

	strcpy(puppy->owner, owner);

	puppy->age = age;

	return (puppy);
}
