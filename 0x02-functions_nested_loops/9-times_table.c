#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 */
void times_table(void)
{
	for (n = 0; n < 10; n++)
	{
		_putchar('0');

		for (m = 1; m < 10; m++)
		{
			_putchar(',');
			_putchar(' ');
			if (n * m < 10)
			{
				_putchar('0' + n * m);
			}
			else
			{
				_putchar('0' + (n * m) / 10);
				_putchar('0' + (n * m) % 10);
			}
		}
		_putchar('\n');
	}
}
