#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings passed into function with a separator
 * @separator: delimiter between each printed integer
 * @n: number of integers to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *va_str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		va_str = va_arg(ap, char *);

		if (i != 0 && separator)
			printf("%s", separator);
		if (va_str)
			printf("%s", va_str);
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(ap);
}
