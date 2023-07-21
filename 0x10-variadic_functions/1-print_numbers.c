#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints integers passed into function with a separator
 * @separator: delimiter between each printed integer
 * @n: number of integers to be printed
 * Return: sum of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator)
			printf("%s", separator);
		printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
