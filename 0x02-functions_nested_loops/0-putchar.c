#include <stdio.h>
#include"main.h"
/**
 * main - ENTRY POINT
 *
 * Description: write _putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		-putchar(str[ch]);
	_putchar('\n');

	return (0);
}
