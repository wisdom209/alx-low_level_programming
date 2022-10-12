#include "function_pointers.h"
/**
 * array_iterator - iterates array of function pointers
 * @array: array to iterate
 * @size: size of array
 * @action: function pointer to call
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		if (action && array)
			action(array[i]);
	}
}
