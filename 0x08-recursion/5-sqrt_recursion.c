#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n:  number
 *
 * Return: int
*/

int _sqrt_recursion(int n)
{

	return (_square(n, 1));
}
/**
 * _square - find natural square root
 * @n: number
 * @v: square root
 *
 * Return: int
*/

int _square(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (_square(n, v + 1));
	else
		return (-1);
}
