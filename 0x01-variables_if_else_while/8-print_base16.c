#include <stdio.h>

/**
 * main - prints base 16 digits
 *
 * Return: 0 on complete otherwise 1
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
