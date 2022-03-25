#include "main.h"

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
		if (i == 0 && *(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) = *(s + i) - 32;

		j = *(s + i);
		if (j == 32 || j == 9 || j == 10 || j == 44 || j == 59 ||
				j == 46 || j == 33 || j == 63 || j == 34 ||
				j == 40 || j == 41 || j == 123 || j == 125)
		{
			if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
			{
				*(s + i + 1) = *(s + i + 1) - 32;
			}
		}

		i++;
	}

	return (s);
}
