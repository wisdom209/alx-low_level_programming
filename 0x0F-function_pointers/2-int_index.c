/**
 * int_index - compares index against array
 * @array: array to compare
 * @size: size of array
 * @cmp: compare function
 *
 * Return: 1 if successful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array && cmp)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
