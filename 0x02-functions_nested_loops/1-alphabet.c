#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: 0 on complete otherwise 1
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
