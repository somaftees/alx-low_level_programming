#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the
 * sum of all its parameters.
 * @n: unsigned int.
 * Return: s.
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	unsigned int i;
	va_list p;

	va_start(p, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		s += va_arg(p, int);

	va_end(p);

	return (s);
}
