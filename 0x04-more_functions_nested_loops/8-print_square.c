
#include "main.h"

/**
 * print_square - prints square
 * @size: the size of the square
 *
**/

void print_square(int size)
{
	char ch;
	int i, j;

	ch = 35;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < size; i++)
		{

			for (j = 0; j < size; j++)
			{
				_putchar(ch);
			}

			_putchar('\n');
		}
	}
}
