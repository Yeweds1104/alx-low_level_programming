#include "main.h"

/**
 * _strcpy - copies the string pointed by src to pointed by dest
 * @src: pointer to src string
 * @dest: pointer to dest string
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = sizeof(src) / sizeof(int);

	for (i = 0; i < length; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
