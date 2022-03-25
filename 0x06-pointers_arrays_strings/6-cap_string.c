#include "main.h"

/**
 * _islower - checks if the letter is lowercase or not
 * Return: 1 if it is lowercase, 0 if it is not
 * @c: character to be checked
 */

int _islower(int *c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}


/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to be converted to uppercase
 * Return: pointer to uppercase string
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (_islower(*(s + i) != 0))
		{
			*(s + i) = *(s + i) - 32;
		}

		i++;
	}

	return (s);
}
