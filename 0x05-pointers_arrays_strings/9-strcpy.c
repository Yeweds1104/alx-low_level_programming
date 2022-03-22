#include "main.h"

/**
 * _strcpy - copies the string pointed by src to pointed by dest
 * @src: pointer to src string
 * @dest: pointer to dest string
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	do {
		*(dest + i) = *(src + i);
		i++;
	} while (*(src + i) != '\0');

	return (dest);
}
