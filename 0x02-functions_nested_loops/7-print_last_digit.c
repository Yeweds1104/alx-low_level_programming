#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Return: 0 if exited succesfully
 * 'n': integer parameter tobe computed
 *
**/

int print_last_digit(int n)
{
	n = n % 10;
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = (-1) * n;
		return (n);
	}

}
