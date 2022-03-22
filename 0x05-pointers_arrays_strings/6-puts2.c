#include "main.h"

/**
 * puts2 - reverses the string
 * @str: pointer to a string
 */

void puts2(char *str)
{
	int i, length;

	length = sizeof(str) / sizeof(char);

	for (i = 0; i < length; i += 2)
	{
		if (*(str + i) == '\0')
			break;

		_putchar(*(str + i));
	}
	_putchar('\n');
}
