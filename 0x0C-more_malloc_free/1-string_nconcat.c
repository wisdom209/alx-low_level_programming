#include "main.h"

int _strlen(char *s);
char *concatString(char *concatStr, char *dest, char *src, int bytes);
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: no of chars for s2 to concatenate to s1
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = _strlen(s1), s2len = _strlen(s2), s3l3n = s1len + s2len;
	int num = n;
	char *s3 = malloc(sizeof(char) * s3l3n + 1);

	if (num < 0)
		return (NULL);

	if (!s3)
		return (NULL);
	if (n >= s2len)
	{
		if (!s1)
		{
			s3 = concatString(s3, "", s2, s2len);
			return (s3);
		}
		if (!s2)
		{
			s3 = concatString(s3, s1, "", 0);
			return (s3);
		}
		s3 = concatString(s3, s1, s2, s2len);
		return (s3);
	}
	if (!s1)
	{
		s3 = concatString(s3, "", s2, s2len);
		return (s3);
	}
	if (!s2)
	{
		s3 = concatString(s3, s1, "", 0);
		return (s3);
	}

	s3 = concatString(s3, s1, s2, n);
	return (s3);
}

/**
 * _strlen - gets the length of string
 * @s: string to find its length
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (s[i] != '\0')
	{
		i = (sizeof(char) * i) + 1;
	}
	return (i);
}

/**
 * concatString - concatenates strings
 * @concatStr: concatenate string variable
 * @dest: first string
 * @src: second string
 * @bytes: num of bytes from src to concatenate
 *
 * Return: concatenated string
 */
char *concatString(char *concatStr, char *dest, char *src, int bytes)
{
	int i = 0, destLen = _strlen(dest);
	int concatLen = destLen + bytes;

	for (i = 0; i < concatLen; i++)
	{
		if (i < destLen)
			concatStr[i] = dest[i];
		else
			concatStr[i] = src[i - destLen];
	}

	concatStr[i] = '\0';

	return (concatStr);
}
