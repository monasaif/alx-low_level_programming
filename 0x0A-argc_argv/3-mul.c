#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: int
 * @argv: value
 *
 * Return: 0 (success) 1 (error)
*/
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{

		printf("Erorr\n");
		return (1);
	}
	return (0);
}
