#include "main.h"

/**
 * reverse_array - reverse the array
 * @a: array parameter
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, j, b;

	i = 0;
	j = n - 1;

	while (i <= j)
	{
		b = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = b;
	}
}
