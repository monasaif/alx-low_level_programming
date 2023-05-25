#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name.
 * @char: pointer to character
 * @f: pointer to function
 *
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
