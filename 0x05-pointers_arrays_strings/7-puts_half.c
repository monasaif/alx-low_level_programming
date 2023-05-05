#include "main.h"
#include <string.h>
/**
 * puts_half - print the second half of the string
 *
 * @str: parameter of string
 *
 * Description: If the number of characters is odd, print the last n
*/

void puts_half(char *str)
{
	int i;
	int n = strlen(str);

	for (int i = n / 2; i < n; i++)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}


