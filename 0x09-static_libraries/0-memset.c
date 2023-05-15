#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @n: number of bytes
 * @s: pointer of string
 * @b: constant
 *
 * Return: @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int it;

	for (it = 0; n > 0; it++, n--)
	{
		s[it] = b;
	}
	return (s);
}
