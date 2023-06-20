#include "main.h"

/**
 *  print_last_digit- gets the last digit of an integer
 *
 * @n: integer
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	_putchar('0' + n % 10);
	return (n % 10);
}
