#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 through 9
 *
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
