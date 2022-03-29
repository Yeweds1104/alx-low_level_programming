#include "main.h"

/**
 * _memcpy - copies from src memory to dest memory
 * @dest: pointer to memory
 * @src: pointer to memory
 * @n: number of bytes
 * Return: pointer to memory
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while ((*s + i) != '\0')
	{
		if (*s + i == c)
		{
			return (*s + i);
		}

		i++;
	}

	return NULL;
}
