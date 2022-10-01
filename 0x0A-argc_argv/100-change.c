#include "main.h"
#include <ctype.h>
#include <stdlib.h>

int changeCounter(int amount);
/**
 * main - entry point
 * @argc: number of args plus file name
 * @argv: array of args
 *
 * Return: 0 if successful
 */

int main(int argc __attribute__((__unused__)),
		 char *argv[] __attribute__((__unused__)))
{
	int valuePassed = 0, minChange = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	valuePassed = atoi(argv[1]);

	if (valuePassed < 0)
	{
		printf("0\n");
		return (0);
	}

	minChange = changeCounter(valuePassed);

	printf("%d\n", minChange);

	return (0);
}

/**
 * changeCounter - counts minimal change
 * @amount: amount to get minimal change
 *
 * Return: minimal change
 */
int changeCounter(int amount)
{
	int tracker = 0;

	if (amount / 25)
	{
		tracker = amount / 25;
		amount = amount % 25;
	}
	if (amount / 10)
	{
		tracker = tracker + (amount / 10);
		amount = amount % 10;
	}
	if (amount / 5)
	{
		tracker = tracker + (amount / 5);
		amount = amount % 5;
	}
	while (amount / 2)
	{
		tracker = tracker + (amount / 2);
		amount = amount % 2;
	}
	tracker = tracker + amount;

	return (tracker);
}

