#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints all single digit numbers of base 10 starting from 0
* Return: 0 if exited properly, non zero otherwise
**/

int main(void)
{
	int length, i;

	int single_digit_numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	length = sizeof(single_digit_numbers) / sizeof(int);

	for (i = 0; i < length; i++)
		putchar(single_digit_numbers[i] + '0');

	putchar('\n');

	return (0);

}
