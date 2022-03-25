#include "main.h"

/**
 * _strncpy - concatenate two strings
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: byte to be copied
 * Return: pointer to char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (*(src + i) != '\0')
		{
			*(dest + i) = *(src + i);
			i++;
		}
		else
		{
			*(dest + i) = '\0';
			i++;
		}
	}

	return (dest);
}
