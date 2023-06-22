#include "main.h"

/**
 * print_diagonal - prints a diagonal using backslash
 * @n: length of the diagonal
 */
void print_diagonal(int n)
{
	int i, j = 0;
	int space = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		while (j < space)
		{
			_putchar(' ');
			j++;
		}
		++space;
		_putchar('\');
		_putchar('\n');
			
}
