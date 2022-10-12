#include "3-calc.h"
#include "string.h"
/* #include "3-get_op_func.c" */

/**
 * main - command line math
 * @argc: num of args + file
 * @argv: array of args
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	char *op = NULL;
	int num1 = 0;
	int num2 = 0;

	if (argc != 4)
	{
		printf("Error count\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if ((strcmp(op, "/") == 0 && num2 == 0) ||
		(strcmp(op, "%") == 0 && num2 == 0))
	{
		printf("Error div\n");
		return (100);
	}

	if (strcmp(op, "+") == 0 || strcmp(op, "*") == 0 ||
		strcmp(op, "/") == 0 || strcmp(op, "-") == 0 ||
		strcmp(op, "%") == 0)
	{
		int a = (get_op_func(op))(num1, num2);

		printf("%d\n", a);
		return (0);
	}
	printf("Error\n");
	return (99);
}
