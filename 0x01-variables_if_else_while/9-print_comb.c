#include <stdio.h>

/**
 * main - prints list of digits
 *
 * Return: 0 on complete otherwise 1
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
