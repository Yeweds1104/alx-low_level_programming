#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to a string
 */

void print_rev(char *s)
{
	int i, length;

	length = sizeof(s);

	for (i = length - 2; i < 0; i--)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
