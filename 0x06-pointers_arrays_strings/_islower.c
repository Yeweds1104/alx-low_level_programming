#include "main.h"

/**
 * _islower - checks if the letter is lowercase or not
 * Return: 1 if it is lowercase, 0 if it is not
 * @c: character to be checked
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
