/**
 * _isdigit - checks if a character is a digit
 * @c: Takes an integer
 *
 * Return: 1 if an integer between 0 to 9
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
