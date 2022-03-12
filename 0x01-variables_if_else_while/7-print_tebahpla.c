#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints lowercase alphabets in reverse
* Return: 0 if exited properly, non zero otherwise
 **/

int main(void)
{
	int length, i;

	char lower_case[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};

	length = sizeof(lower_case);

	for (i = length; i > 0; i--)
		putchar(lower_case[i - 1]);

	putchar('\n');

	return (0);

}
