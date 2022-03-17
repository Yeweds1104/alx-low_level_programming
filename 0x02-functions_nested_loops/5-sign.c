#include "main.h"

/**
 * print_sign - prints the sign of a number
 * Return: 0 and prints 0 if it is zero,
 * 1 and prints + if it is positive,
 * -1 and prints - if it is negative
 * @n: integer parameter to be checked
**/

int print_sign(int n)
{

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}


}
