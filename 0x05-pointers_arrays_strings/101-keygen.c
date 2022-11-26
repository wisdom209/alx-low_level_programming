#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
 * main - entry
 * @void: void
 *
 * Return: 0 if successful
 */
int main(void)
{
	int seed = getpid(), run_sum = 0, i = 0;
	int rem = 0;
	char correct_pass[100];

	srand(seed * time(0));

	for (i = 0; i < 100; i++)
	{
		int a = (rand() % 10) + 65;

		if (run_sum > (2772 - 100))
			break;

		run_sum = run_sum + a;

		correct_pass[i] = a;
	}

	rem = (2772 - run_sum);

	if (rem < 33)
	{
		correct_pass[i - 1] = rem + correct_pass[i - 1];
		correct_pass[i] = '\0';
	}
	else
	{
		correct_pass[i] = rem;
		correct_pass[i + 1] = '\0';
	}

	for (i = 0; correct_pass[i] != '\0'; i++)
		printf("%c", correct_pass[i]);

	return (0);
}


