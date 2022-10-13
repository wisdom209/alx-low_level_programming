#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format of what to print
 *
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	char *s;
	va_list ptr;
	int i = 0;

	va_start(ptr, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ptr, int));
			break;
		case 'i':
			printf("%d", va_arg(ptr, int));
			break;
		case 'f':
			printf("%f", va_arg(ptr, double));
			break;
		case 's':
			;
			s = va_arg(ptr, char *);
			if (s == NULL)
				printf("(nil)");
			if (s != NULL)
				printf("%s", s);
			break;
		default:
			break;
		}
		while (format[i + 1] != '\0' &&
			   (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
			break;
		}
		i++;
	}
	printf("\n");
}
