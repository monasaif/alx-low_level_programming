#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: pointer of destintion
 * @src: source
 * @n: length of string
 *
 * Return: @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int tr;

	for (tr = 0; n > tr; tr++)
	{
		src[tr] = dest[tr];
	}
	return (dest);
}
