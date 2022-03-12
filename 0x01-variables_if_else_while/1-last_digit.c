#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit;

	last_digit = n%10;

	if (last_digit > 5)
	{
		printf("Last digit of %d", n);
		printf(" is %d", last_digit);
		printf(" and is greater than 5.\n");
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d", n);
		printf(" is %d", last_digit);
		printf(" and is zero.\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d", n);
		printf(" is %d", last_digit);
		printf(" and is less than 6 and not zero.\n");
	}

	return (0);
}
