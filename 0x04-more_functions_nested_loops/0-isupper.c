
#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if the given letter is uppercase or not
 * Return: 1 if it is uppercase, else return 0
 * @c: integer parameter to be checked
 *
**/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
