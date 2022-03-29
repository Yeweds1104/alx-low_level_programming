#include "main.h"

/**
 * _memcpy - copies from src memory to dest memory
 * @dest: pointer to memory
 * @src: pointer to memory
 * @n: number of bytes
 * Return: pointer to memory
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, num;

	i = 0;
	num = 0;
	while ((*accept + i) != '\0')
	{
		if (*s == (*accept + j))
			num++;
			break;
		else
			num = 0;

	}

	if (num == 0)
		return num;

	num = 0;

	while ((*s + i) != '\0')
	{
		j = 0;
		while ((*accept + j) != '\0')
		{
			if ((*s + i) == (*accept + j))
			{
				num++;
			}

			j++;
		}

		i++;
	}

	return num;
}
