#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets 10 times
 * Return: 0 if exited properly
 *
**/

void print_alphabet(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
	}

}
