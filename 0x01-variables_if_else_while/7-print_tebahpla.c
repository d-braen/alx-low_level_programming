#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 *
 * Return: 0 on complete otherwise 1
 */
int main(void)
{
	int a;

	for (a = 'z'; a >='a'; a--)
		putchar(a);
	putchar('\n');

	return (0);
}
