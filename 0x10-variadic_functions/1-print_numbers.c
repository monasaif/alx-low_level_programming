#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: number of argument
 * @...: integer to print
 * @separator: the string to be printed between numbers
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int), i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
