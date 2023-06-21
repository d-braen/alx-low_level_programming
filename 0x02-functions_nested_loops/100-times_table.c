#include "main.h"

/**
 * print_number - print variable digit nuumber
 *
 * @n: number (int)
 *
 */
void print_number(int n)
{
	if (n / 10 == 0)
	{
		_putchar('0' + n);
		return;
	}
	print_number(n / 10);
	_putchar('0' + n % 10);

}
/**
 * print_times_table - prints the times table of variable size
 * @n: size of the table
 *
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			if (j * i < 10)
			{
				_putchar(' ');
				_putchar(' ');
				print_number(i * j);
			}
			else if (i * j < 100)
			{
				_putchar(' ');
				print_number(i * j);
			}
			else
			{
				print_number(i * j);
			}
		}
		_putchar('\n');
	}
}
