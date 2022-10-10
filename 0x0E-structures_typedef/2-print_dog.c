#include "dog.h"
/**
 * print_dog - prints dog member values
 * @d: dog instance
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	double nilDouble = 0;

	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age == 0)
			printf("Age: %f\n", nilDouble);
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s", d->owner);
	}
}
