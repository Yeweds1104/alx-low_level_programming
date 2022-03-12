#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints lowercase alphabets
* Return: 0 if exited properly, non zero otherwise
 **/

int main(void)
{
	int lower_case_length, i, upper_case_length;

	char lower_case[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	char upper_case[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z'};

	lower_case_length = sizeof(lower_case);
	upper_case_length = sizeof(upper_case);

	for (i = 0; i < lower_case_length; i++)
		putchar(lower_case[i]);
	for (i = 0; i < upper_case_length; i++)
		putchar(upper_case[i]);

	putchar('\n');

	return (0);

}
