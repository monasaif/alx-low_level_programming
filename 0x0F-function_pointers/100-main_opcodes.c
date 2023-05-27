#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: numbers of argument
 * @argv: value
 *
 * Return: Always 0
*/
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int m;

	if (argc != 2)
		printf("Error\n"), exit(1);
	m = atoi(argv[1]);
	if (m < 0)
		printf("Error\n"), exit(2);
	while (m--)
		printf("%02hhx%s", *p++, m ? " " : "\n");
	return (0);
}
