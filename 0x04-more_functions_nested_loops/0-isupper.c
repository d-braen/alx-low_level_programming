#include "main.h"

/**
 * _isupper - checks for uppercase alphabets
 * @c: character
 * Return: 1 if c is uppercase otherwise returns 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
