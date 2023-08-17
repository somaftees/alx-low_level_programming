#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 * @n: unsigned int.
 * @separator: char.
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(p);
}
