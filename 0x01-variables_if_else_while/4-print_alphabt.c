#include <stdio.h>
/**
 * main - ENTRY POINT
 *
 * Description: Print all alphabet except q, e
 *
 * Return: alwayes 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
