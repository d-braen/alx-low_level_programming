#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: character
 * Return: 1 if c is a digit otherwise returns 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
