#include "main.h"

/**
 * rev_string - reverses the string
 * @s: pointer to a string
 */

void rev_string(char *s)
{
	int i, j, length;

	length = 0;
	i = 0;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}
	j = length;
	length--;
	char c;

	for (i = 0; i <= length || i == length + 1; i++, length--)
	{
		c = *(s + i);
		*(s + i) = *(s + length);
		*(s + length) = c;
	}
	*(s + j) = '\0';
}
