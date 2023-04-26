#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
