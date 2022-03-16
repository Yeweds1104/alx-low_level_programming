#include "main.h"
/**
 * _islower - checks if the given letter is lower case or not
 * Return: 1 if it is lowercase, else return 0
 * 'c': integer parameter to be checked
 *
**/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
