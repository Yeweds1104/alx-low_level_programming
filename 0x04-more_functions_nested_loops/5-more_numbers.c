#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 10 times
 *
**/

void more_numbers(void)
{
	char ch;
	int i;

	ch = '0';

	for (i = 0; i < 10; i++)
	{
		while (ch <= '14')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
	}
}
