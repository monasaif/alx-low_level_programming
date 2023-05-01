#include <unistd.h>
#include"main.h"

/**
 * _putchar - write character c to stdout
 *@c: The character to print c
 *
 * Return: ON succes 1.
 *         on error -1 is returned,
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
