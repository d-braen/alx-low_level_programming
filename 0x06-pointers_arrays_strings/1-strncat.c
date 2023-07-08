#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: source strings
 * @dest: destination strings
 * @n: number of characters to copy from src
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	for (i = 0; dest[i]; i++)
	{
		;
	}

	while (j < n)
	{
		if (src[j] == '\0')
			break;
		dest[i++] = src[j++];
	}

	dest[i] = '\0';

	return (dest);
}
