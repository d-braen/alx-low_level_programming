#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * @c: the character to be checked
 * Return: 1 if c is lowercase otherwise, return 0
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
