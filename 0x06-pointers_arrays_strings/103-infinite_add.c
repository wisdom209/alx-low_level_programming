/**
 * _strlen - gets length of a string
 * @s: string param
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strrev - reverses a string
 *
 * @n:string input
 *
 * Return:void
 */
void _strrev(char *n)
{
	int c = 0;
	int i = 0;
	char temp;

	while (n[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c / 2; i++)
	{
		int j = c - i - 1;

		temp = *(n + i);
		*(n + i) = *(n + j);
		*(n + j) = temp;
	}
}

/**
 *infinite_add - adds two long numbers,stores them.in a buffer
 *
 *@n1:one of the two numbers
 *@n2:2nd no.
 *@r:buffer to store result
 *@size_r:buffer size
 *
 *Return:pointer to result
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int l1 = 0, l2 = 0, digits = 0;
	int val1 = 0, val2 = 0, sum = 0;

	l1 = _strlen(n1);
	l2 = _strlen(n2);

	l1--;
	l2--;

	if (l1 >= size_r || l2 >= size_r)
		return (0);

	while (l1 >= 0 || l2 >= 0 || carry)
	{
		if (l1 < 0)
			val1 = 0;
		else
			val1 = *(n1 + l1) - '0';

		if (l2 < 0)
			val2 = 0;
		else
			val2 = *(n2 + l2) - '0';

		sum = (val1 + val2 + carry) % 10;
		carry = (val1 + val2 + carry) / 10;

		if (digits >= (size_r - 1))
			return (0);

		*(r + digits) = sum + '0';

		digits++;
		l1--;
		l2--;
	}
	*(r + digits) = '\0';
	_strrev(r);
	return (r);
}
