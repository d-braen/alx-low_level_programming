#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: character pointer (string)
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (len);
	}
	while (s[++len])
		;

	return (len);
}
