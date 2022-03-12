#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints all the numbers of base 16 in lowercase
* Return: 0 if exited properly, non zero otherwise
 **/

int main(void)
{
	int letter_length, i, number_length;

	char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char letters[] = {'a', 'b', 'c', 'd', 'e', 'f'};

	letter_length = sizeof(letters);
	number_length = sizeof(numbers);

	for (i = 0; i < number_length; i++)
		putchar(numbers[i]);
	for (i = 0; i < letter_length; i++)
		putchar(letters[i]);

	putchar('\n');

	return (0);

}
