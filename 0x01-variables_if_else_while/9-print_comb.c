#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints all possible combinations of single digit numbers
* Return: 0 if exited properly, non zero otherwise
 **/

int main(void)
{
	int length, i;

	int single_digit_numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	length = sizeof(single_digit_numbers) / sizeof(int);

	for (i = 0; i < length;)
	{
		putchar(single_digit_numbers[i] + '0');
		i++;
		if (i == length)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);

}
