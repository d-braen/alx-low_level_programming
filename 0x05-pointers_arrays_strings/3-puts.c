#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: character pointer (string)
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
