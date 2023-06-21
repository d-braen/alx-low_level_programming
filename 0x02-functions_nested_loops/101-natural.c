#include "main.h"
#include <stdio.h>

/**
 * main - print sum of numbers which are multiples of 3 or 5
 *
 * Return: 0 on success
 */
int main(void)
{
	const int LIM = 1024;
	int sum = 0;
	int i;

	for (i = 0; i < LIM; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
