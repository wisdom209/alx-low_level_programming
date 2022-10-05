#include "main.h"

void expandString(int stringLen, char *str2, char *str1);
int _strlen(int startI, char end, char *str);
int countChars(int i, int counter, char *str);
/**
 * strtow - splits a string into words.
 * @str: string to split
 *
 * Return: pointer of an array of strings
 */
char **strtow(char *str)
{
	int wordCount = 0, i = 0, a = 0, iter = 0, stringLen = 0;
	char **arr;
	char *str2;

	stringLen = _strlen(0, '\0', str);
	arr = (char **)malloc(sizeof(char) * stringLen + 1);
	if (arr == NULL)
		return (NULL);
	str2 = (char *)malloc(sizeof(char) * stringLen + 1);
	if (str2 == NULL)
		return (NULL);
	expandString(stringLen, str2, str);
	str2[stringLen + 2] = '\0';

	for (i = 0; i < stringLen + 1; i++)
	{
		if (str2[i] != ' ' && str2[i - 1] == ' ')
		{
			int initial = i, counter = i;

			counter = countChars(i, counter, str2);
			counter = counter - initial;
			a = wordCount;
			arr[a] = (char *)malloc(sizeof(char) * counter + 1);
			if (arr[a] == NULL)
				return (NULL);
			iter = i;
			counter = 0;
			while (str2[iter] != ' ' && str2[iter] != '\0')
			{
				arr[a][counter] = str2[iter];
				iter++;
				counter++;
			}
			arr[a][iter] = '\0';
			wordCount++;
		}
	}
	arr[wordCount] = NULL;
	return (arr);
}

/**
 * _strlen - gets string length
 * @startI: start index of string
 * @end: end char delimiter
 * @str: string to get length
 *
 * Return: length of string
 */
int _strlen(int startI, char end, char *str)
{
	while (str[startI] != end)
	{
		startI++;
	}
	return (startI);
}

/**
 * expandString - adds extra space to beginning of string
 * @stringLen: length of string of string to expand
 * @str2: expanded string
 * @str1: string to expand
 *
 * Return: Nothing
 */
void expandString(int stringLen, char *str2, char *str1)
{
	int i = 0;

	for (i = 0; i < stringLen + 1; i++)
	{
		if (i == 0)
			str2[i] = ' ';
		else
			str2[i] = str1[i - 1];
	}
}

/**
 * countChars - count characters following spaces
 * @i: iterator
 * @counter: tracks the count
 * @str: string to count
 *
 * Return: counter
 */
int countChars(int i, int counter, char *str)
{
	if (i != 0)
	{
		while (str[counter] != ' ' && str[counter] != '\0')
			counter++;
	}
	return (counter);
}
