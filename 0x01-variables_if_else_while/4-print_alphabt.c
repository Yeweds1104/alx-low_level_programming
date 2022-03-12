#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints lowercase alphabets
* Return: 0 if exited properly, non zero otherwise
 **/

int main(void)
{
	int length, i;

	char lower_case[] = {'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};

	length = sizeof(lower_case);

	for (i = 0; i < length; i++)
		putchar(lower_case[i]);

	putchar('\n');

	return (0);

}
