#include "main.h"

/**
 * print_diagonal - prints a diagonal using backslash
 * @n: length of the diagonal
 */
void print_diagonal(int n)
{
	int i, j = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
