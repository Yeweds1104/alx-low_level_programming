#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, ret;

	i = 0;
	ret = 0;

	while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
		{
			return (1);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			return (-1);
		}
		else
		{
			ret = 0;
			i++;
		}
	}

	return (ret);
}
