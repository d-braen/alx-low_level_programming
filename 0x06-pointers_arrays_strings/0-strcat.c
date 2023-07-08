#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: source strings
 * @dest: destination strings
 *
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	for (i = 0; dest[i]; i++)
	{
		;
	}

	while (src[j])
	{
		dest[i++] = src[j++];
	}

	dest[i] = '\0';

	return (dest);
}
