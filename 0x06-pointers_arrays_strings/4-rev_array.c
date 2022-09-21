/**
 * reverse_array - reverses an array
 * @a: array
 * @n: size of array
 *
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
