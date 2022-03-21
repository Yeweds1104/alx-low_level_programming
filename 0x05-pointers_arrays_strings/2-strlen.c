#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a pointer to a string
 * Return: integer
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
