#include "main.h"

/**
 * _isalpha - check for alphabet
 *
 * @c: the character to be checked
 * Return: 1 if c is an alphabet otherwise, return 0
 */
int _isalpha(int c)
{
	if (c < 'A' || c > 'Z' && c < 'a' || c > 'z')
		return (0);
	return (1);
}
