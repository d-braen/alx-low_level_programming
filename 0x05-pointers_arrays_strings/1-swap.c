#include "main.h"

/**
 * swap_int - exchange the values of the two variable pointers
 * @a: pointer to first int
 * @b: pointer to second int
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
