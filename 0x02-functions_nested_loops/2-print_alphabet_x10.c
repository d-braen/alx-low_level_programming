#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case
 *
 * Return: 0 on complete otherwise 1
 */
void print_alphabet_x10(void)
{
	int idx;
	int a;

	for (idx = 0; idx < 10; idx++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
