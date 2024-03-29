#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: pointer to a string
 * @src: pointer to a string
 * Return: pointer to char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i) = '\0';

	return (dest);
}
