#include "main.h"

/**
 * _strnccpy - copies src string to destination string
 * @src: source strings
 * @dest: destination strings
 * @n: number of characters to copy from src
 * Return: pointer to the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			while (i < n)
			{
				dest[i++] = '\0';
			}
			break;
		}
		dest[i] = src[i];
	}

	return (dest);
}
