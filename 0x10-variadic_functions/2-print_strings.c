#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings,
 * followed by a new line.
 * @separator: a charcter pointer.
 * @n: unsigned integer.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list p;

	va_start(p, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
