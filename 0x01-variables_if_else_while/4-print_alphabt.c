#include <stdio.h>

/**
 * main - prints the alphabet in lower case except q and e
 *
 * Return: 0 on complete otherwise 1
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'e' && a != 'q')
			putchar(a);
	putchar('\n');

	return (0);
}
