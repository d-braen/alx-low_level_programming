#include "main.h"

/**
 * print_sign - prints the sign of an integer
 *
 * @n: integer
 * Return: 1 if n is +ve, -1 if -ve and 0 if 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	_putchar('-');
	return (-1);
}
