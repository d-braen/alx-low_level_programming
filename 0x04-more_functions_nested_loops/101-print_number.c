#include "main.h"

/**
 * print_number - prints an integer to stdout
 * @num: number
 */
void print_number(int num)
{
	int n = num;
	int div = 1;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		n = num;
	}
	while (n >= 10)
	{
		n = n / 10;
		div *= 10;
	}

	while (div)
	{
		_putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
}
