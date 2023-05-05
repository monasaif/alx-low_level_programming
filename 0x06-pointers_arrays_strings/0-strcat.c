#include "main.h"
/**
 *_strcat - function that concate two string
 *
 * @dest: pointer to destination input
 * @src : pointer to source input
 *
 * Return: pointer to resulting string
*/
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[0])
		c++;

	for (c2 = 0; src[c2] ; c++)

		dest[c++] = src[c2];

	return (dest);
}
