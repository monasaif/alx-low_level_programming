#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add two integer
 * @a: first integer
 * @b:swecond integer
 *
 * Return: the sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: the sub
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: the mul
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: the quotient
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder
*/

int op_mod(int a, int b)
{
	return (a % b);
}
