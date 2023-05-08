#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: string
 * @accept: bytes
 *
 * Return: @accept
*/
unsigned int _strspn(char *s, char *accept)
{
	 unsigned int it, jt;

	for (it = 0; s[it] != '\0'; it++)
	{
		for (jt = 0; accept[jt] != s[it]; jt++)
		{
			if (accept[jt] == '\0')
				return (it);
		}
	}
	return (it);
}
