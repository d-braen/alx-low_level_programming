#include <stdio.h>

/**
 * main - prints all possible combinations of tree digits
 *
 * Return: 0 on complete otherwise 1
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a < '8'; a++)
	{
		for (b = a + 1; b < '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7' || b != '8' || c != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
