#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * Return: 0 if executed well
 * n: integer parameter
 *
**/

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
	return (0);
}