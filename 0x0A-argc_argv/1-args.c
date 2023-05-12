#include <stdio.h>

/**
 * main -  print a number, followed by a new line
 * @argc: int
 * @argv: value
 *
 * Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
