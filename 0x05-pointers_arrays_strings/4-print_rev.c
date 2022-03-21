#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to a string
 */

void print_rev(char *s)
{
	int i, length;

	length = sizeof(s);

	for (i = length - 1; i > 0; i--)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}
