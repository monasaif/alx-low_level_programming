#include "main.h"

/**
 * *_strchr -  locates a character in a string.
 * @c: a pointer to the first occurrence of the character.
 * @s: parameter of string
 *
 * Return: @c or null
*/

char *_strchr(char *s, char c)
{

	int it;

	for (it = 0; s[it] >= '\0'; it++)
	{
		if (s[it] == c)
		{
			return (s + it);
		}
	}
	return ('\0');
}
