#include "main.h"

/**
 * main - print sum of even fibonacci terms not exceeding 4000000
 *
 * Return: 0 on success, non-zero otherwise
 */
int main(void)
{
	long int current = 1;
	long int next = 2;
	long int tmp = 0;
	long int sum = 0;

	while (next <= 4000000)
	{
		if (next % 2 == 0)
			sum += next;
		tmp = next;
		next += current;
		current = tmp;
	}

	printf("%ld\n", sum);

	return (0);
}
