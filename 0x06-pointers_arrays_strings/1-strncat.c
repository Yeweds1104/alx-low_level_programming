#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: byte to be copied
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i) = '\0';

	return (dest);
}
