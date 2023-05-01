#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 *@c: The character to print
 *
 * Return: ON succes 1.
 *         on error -1 is returned,and errno is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
