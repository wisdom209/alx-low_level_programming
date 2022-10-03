#include "main.h"

/**
 * _strdup - duplicates string
 * @str: string to duplicate
 *
 * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	char *newStr;
	int strsize = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[strsize] != '\0')
	{
		strsize++;
	}

	newStr = (char *)malloc((sizeof(char) * strsize) + 1);

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < strsize; i++)
	{
		newStr[i] = str[i];
	}

	newStr[strsize] = '\0';

	return (newStr);
}
