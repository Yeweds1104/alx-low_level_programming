#include "main.h"

/**
 * puts2 - reverses the string
 * @str: pointer to a string
 */

void puts2(char *str)
{
	int i, length;

	length = sizeof(str);

	for (i = 0; i < length - 1; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
