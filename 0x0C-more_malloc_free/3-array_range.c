#include "main.h"

/**
 * array_range - creates an array range
 * @min: min value of array
 * @max: max value of array
 *
 * Return: pointer to created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (!array)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		array[i - min] = i;
	}

	return (array);
}
