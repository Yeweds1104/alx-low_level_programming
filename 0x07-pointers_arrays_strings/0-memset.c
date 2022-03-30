#include "main.h"

/**
 * _memset - fills the first n bytes of the memory pointed by s with b
 * @s: pointer to a memory
 * @b: character to be filled
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		**s + i = b;
		i++;
	}

	return (*s);
}
