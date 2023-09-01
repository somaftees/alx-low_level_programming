#include "main.h"
/**
 * print_binary - a function that prints
 * the binary representation of a number.
 * @n: unsigned long integer.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	int i, counter = 0;

	for (i = 63; i >= 0; i--)
	{
		if (n >> i & 1)
		{
			_putchar('1');
			counter = 1;
		}
		else if (counter == 1)
			_putchar('0');
	}
	if (!counter)
		_putchar(48);
}
