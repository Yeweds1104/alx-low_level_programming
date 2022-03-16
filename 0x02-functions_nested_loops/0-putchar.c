#include <stdio.h>
#include "main.h"

/**
 * main - prints "_putchar"
 * Return: 0 if exited properly
 *
**/

int main(void)
{
	char a[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int length;

	length = sizeof(a) / sizeof(char);

	for (i = 0; i < length; i++)
		_putchar(a[i]);

	_putchar('\n');

	return (0);
}
