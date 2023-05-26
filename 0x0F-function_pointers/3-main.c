#include "3-cal.h"
#include<stdio.h>

/**
 * main - check the code.
 * @argc: the number of arguments
 * @argv: arguments value
 *
 * Return: 0
*/
int main(int argc, char **argv)
{
	int (*op_func)(int, int), a, b;

	if (argc != 4)
		prinf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atio(argv[3]);

	op_func = get_on_func(argv[2]);
	if (!op_finc)
		printf("Error\n"), exit(99);
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(a, b));
	return (0);
}
