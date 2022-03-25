#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to be converted to uppercase
 * Return: pointer to uppercase string
 *
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (_islower(*(s + i) == 1))
		{
			*(s + i) = *(s + i) - 32;
		}

		i++;
	}

	return (s);
}
