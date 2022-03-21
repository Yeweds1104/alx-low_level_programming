#include "main.h"

/**
 * puts_half - prints half a string
 * @str: pointer to a string
 */

void puts_half(char *str)
{
	int i, length, n;

	length = sizeof(str);

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		n = length / 2 + 1;
		for (i = n; i < length; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
