#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: character pointer (string)
 *
 */
void _puts(char *str)
{
	int i = 0;

	if (*str == '\0')
	{
		return;
	}
	while (str[i])
		_putchar(str[i]);
}
