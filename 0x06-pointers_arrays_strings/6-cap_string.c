#include "main.h"

/**
 * _islower - checks if the letter is lowercase or not
 * Return: 1 if it is lowercase, 0 if it is not
 * @c: character to be checked
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}


/**
 * cap_string - capitalize all words of a string
 * @s: string to be capitalized
 * Return: pointer to capitalized string
 */

char *cap_string(char *s)
{
	int i;
	char j;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = *(s + i);
		if (j == 32 || j == 9 || j == 10 || j == 44 || j == 59 ||
				j == 46 || j == 33 || j == 63 || j == 34 ||
				j == 40 || j == 41 || j == 123 || j == 125)
		{
			if (_islower(*(s + i + 1)) == 1)
			{
				*(s + i) = *(s + i) - 32;
			}
		}

		i++;
	}

	return (s);
}
