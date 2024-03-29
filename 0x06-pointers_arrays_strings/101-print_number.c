#include "main.h"

/**
 * print_number - prints an integer number
 * @n: number to be printed
 */

void print_number(int n)
{
	int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}

	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
