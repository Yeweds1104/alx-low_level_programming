#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer to an integer
 * @b: a pointer to an integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
