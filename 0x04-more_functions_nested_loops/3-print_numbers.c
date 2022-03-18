#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 **/

void print_numbers(void)
{
	char ch;

	ch = '0';

	while (ch <= '9')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');

}
