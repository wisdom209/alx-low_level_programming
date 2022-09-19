int convertToInt(char *temp, int a, int sign);

/**
 * _atoi - converts string to integer
 * @s: string variable to convert
 *
 * Return: integer conversion of string
 */
int _atoi(char *s)
{
	int c, i, a, j, numPos, numNeg, sign, answer;
	char temp[50];

	c = 0;
	a = 0;

	while (s[c] != 0)
	{
		c++;
	}

	for (i = 0; i < c; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			temp[a] = s[i];
			a++;

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

	answer = convertToInt(temp, a, sign);

	return (answer);
}

/**
 * convertToInt - converts String to Integer
 * @temp: integer char arr
 * @a: size of char arr
 * @sign: determines if integer is negative or positive
 *
 * Return: returns an integer conversion
 */
int convertToInt(char *temp, int a, int sign)
{
	int i, sum;

	i = 0;
	sum = 0;

	while (i < a)
	{
		sum = sum * 10 + (temp[i] - 48);
		i++;
	}

	if (sign < 0)
		return (-sum);

	return (sum);
}
