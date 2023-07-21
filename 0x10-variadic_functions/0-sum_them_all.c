#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all integers passed into function
 * @n: number of integer to be summed
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start (ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);

	va_end (ap);

	return (sum);
}
