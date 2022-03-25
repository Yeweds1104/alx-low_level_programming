#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;
	char letter = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char number = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	i = 0;
	while (*(s + i) != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) == letter[j])
				*(s + i) = number[j];
		}
		i++;
	}

	return (s);
}
