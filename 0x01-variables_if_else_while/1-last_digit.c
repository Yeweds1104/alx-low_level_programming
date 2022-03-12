#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints the last digit of random number
 * Return: 0 if exited properly, non-zero otherwise
 **/

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d", n);
		printf(" is %d", last_digit);
		printf(" and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d", n);
		printf(" is %d", last_digit);
		printf(" and is 0\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d", n);
		printf(" is %d", last_digit);
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}
