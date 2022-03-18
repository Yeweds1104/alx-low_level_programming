
#include "main.h"

/**
 * _isdigit - checks if it is digit or not
 * Return: 1 if it is digit and 0 if it is not
 * @c: integer parameter to be checked
 *
**/

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
