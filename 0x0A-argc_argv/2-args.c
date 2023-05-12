#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: int
 * @argv: value
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
