#include "main.h"

/**
 * main - fizz buzz program
 *
 *Return: 0 on success
 */
int main(void)
{
	int n = 1;

	printf("%d", n);

	while (++n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");

	return (0);
}
