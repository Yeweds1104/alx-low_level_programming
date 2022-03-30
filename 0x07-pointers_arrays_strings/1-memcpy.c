#include "main.h"

/**
 * _memcpy - copies from src memory to dest memory
 * @dest: pointer to memory
 * @src: pointer to memory
 * @n: number of bytes
 * Return: pointer to memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		**dest + i = **src + i;
		i++;
	}

	return (*dest);
}
