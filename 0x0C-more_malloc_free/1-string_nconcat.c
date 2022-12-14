#include "main.h"

int _strlen(char *s);
void concatString(char *concatStr, char *dest, char *src, int bytes);
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
	char *s3;
	int s1len = 0, s2len = 0;
	int num = n;

	if (num < 0)
		return (NULL);

	s1len = _strlen(s1);

	s2len = _strlen(s2);

	s3 = malloc(sizeof(char) * s1len + n + 1);

	if (!s3)
		return (NULL);

	if (num >= s2len)
		num = s2len;

	if (!s1)
	{
		concatString(s3, "", s2, num);
		return (s3);
	}
	if (!s2)
	{
		concatString(s3, s1, "", 0);
		return (s3);
	}

	concatString(s3, s1, s2, num);
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
		i++;
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
 * Return: Nothing
 */
void concatString(char *concatStr, char *dest, char *src, int bytes)
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
}
