#include "main.h"

/**
 * rev_string - reverses the string
 * @s: pointer to a string
 */

void rev_string(char *s)
{
	int i, j, length;

	length = sizeof(s);

	int a[length - 1];

	j = 0;

	for (i = length - 2; i < 0; i--)
	{
		a[j] = *(s + i);
		j++;
	}

	for (i = 0; i < j + 1; i++)
	{
		*(s + i) = a[i];
	}
}
