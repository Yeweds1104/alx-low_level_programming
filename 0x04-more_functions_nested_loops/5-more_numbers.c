#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 10 times
 *
**/

void more_numbers(void)
{
	char ch[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10',
	'11', '12', '13', '14'};

	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j < 14)
		{
			_putchar(ch[j]);
			ch++;
		}

		_putchar('\n');
	}
}
