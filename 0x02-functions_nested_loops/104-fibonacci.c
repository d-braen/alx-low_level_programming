#include "main.h"

/**
 * main - print first 98 fibonacci numbers
 *
 * Return: 0 on success, non-zero otherwise
 */
int main(void)
{
	long int current = 1;
	long int next = 2;
	int i = 2;
	long int tmp = 0;

	putchar('1');

	while (i <= 98)
	{
		printf(", %lu", next);
		tmp = next;
		next += current;
		current = tmp;
		i++;
	}

	putchar('\n');

	return (0);
}
