#include "main.h"

/**
 * puts2 - reverses the string
 * @str: pointer to a string
 */

void puts2(char *str)
{
	int i, length;

	length = sizeof(str);

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		else
			i++;
	}
	_putchar('\n');
}
