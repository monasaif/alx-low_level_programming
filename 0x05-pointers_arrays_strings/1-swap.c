#include "main.h"

/**
 * swap_int - swaps two value of tw integers useng temp
 *
 * @a: iput parameter 1
 * @b: input parameter 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
