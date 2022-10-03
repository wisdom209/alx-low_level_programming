#include "main.h"

int _strlen(char *s);
void copyString(char *s1, char *s2);
/**
 * str_concat - joins two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: new string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, newSize = 0, s1len = 0, s2len = 0;
	char *s3;

	if (!s1 && !s2)
	{
		s3 = (char *)malloc(sizeof(char) + 1);
		copyString(s3, "");
		return (s3);
	}
	if (s1 == NULL)
	{
		s3 = (char *)malloc(sizeof(s2) + 1);
		copyString(s3, s2);
		return (s3);
	}
	if (s2 == NULL)
	{
		s3 = (char *)malloc(sizeof(s1) + 1);
		copyString(s3, s1);
		return (s3);
	}

	s1len = _strlen(s1);
	s2len = _strlen(s2);
	newSize = s1len + s2len;
	s3 = (char *)malloc(sizeof(newSize) + 1);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
	{
		s3[i] = s1[i];
	}

	for (i = s1len; i < newSize; i++)
	{
		s3[i] = s2[i - s1len];
	}
	s3[newSize] = '\0';

	return (s3);
}

/**
 * _strlen - gets length of string
 * @s: string to find length
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * copyString- copy a string
 * @s1: string to copy to
 * @s2: string to copy from
 *
 * Return: nothing
 */
void copyString(char *s1, char *s2)
{
	int s2len = _strlen(s2);
	int i = 0;

	for (i = 0; i < s2len; i++)
	{
		s1[i] = s2[i];
	}
	s1[s2len] = '\0';
}
