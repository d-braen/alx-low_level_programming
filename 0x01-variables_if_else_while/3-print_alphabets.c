#include <stdio.h>

/**
 * main - prints the alphabet in lower case then in upper case
 *
 * Return: 0 on complete otherwise 1
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
