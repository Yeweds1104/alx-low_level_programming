#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case
 * Return: 0 if exited properly
 *
**/

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');

	return (0);
}
