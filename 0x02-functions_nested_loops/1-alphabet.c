#include "main.h"

/**
 * print_alphabet - use _putchar function to print a -z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		-putchar(ch);
	_putchar('\n');
}
