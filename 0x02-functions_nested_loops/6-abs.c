#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * Return: 0 if exited succesfully
 * 'n': integer parameter tobe computed
 *
**/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = (-1) * n;
		return (n);
	}
	else
	{
		return (0);
	}

}
