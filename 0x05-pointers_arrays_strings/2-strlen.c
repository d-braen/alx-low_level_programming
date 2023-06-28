#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: character pointer (string)
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[++len])
		;

	return (len);
}
