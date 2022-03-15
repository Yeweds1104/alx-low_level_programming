
#include <stdio.h>

/**
 * main - prints the size of data types
 * Return: 0 if exited properly
 **/
int main(void)
{

	printf("Size of a char: %lu\n", sizeof(char), " byte(s)");
	printf("Size of an int: %lu\n", sizeof(int), " byte(s)");
	printf("Size of a long int: %lu\n", sizeof(long int), " byte(s)");
	printf("Size of long long int: %lu\n", sizeof(long long int),
			" byte(s)");
	printf("Size of a float: %lu\n", sizeof(float), " byte(s)");

	return (0);
}
