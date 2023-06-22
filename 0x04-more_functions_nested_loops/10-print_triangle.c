#include "main.h"

/**
 * print_triangle - prints triangle using '#' characters
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			_putchar(' ');
		}

		while (j++ < size)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
