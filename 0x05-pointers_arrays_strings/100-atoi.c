/**
 * _atoi - converts string to integer
 * @s: string variable to convert
 *
 * Return: integer conversion of string
 */
int _atoi(char *s)
{
	int c, i, j, numPos, numNeg, sign, sum;

	c = 0;
	sum = 0;
	j = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			sum = sum * 10 + (s[i] - 48);

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}

	while (s[j] <= 48 || s[j] >= 57)
	{
		if (s[j] == '-')
			numNeg++;
		if (s[j] == '+')
			numPos++;
		j++;
	}
	sign = numPos - numNeg;

	if (sign < 0)
		return (-sum);

	return (sum);
}

