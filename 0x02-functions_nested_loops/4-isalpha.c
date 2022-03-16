#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * Return: 1 if it is a letter and 0 if it is not
 * 'c': integer parameter to be checked
 *
**/

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
