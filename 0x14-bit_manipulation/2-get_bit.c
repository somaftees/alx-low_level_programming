#include "main.h"

/**
 * get_bit - a function that returns the
 * value of a bit at a given index.
 * @n: unsigned long integer.
 * @index: unsigned integer.
 * Return: 0 1 or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (n == 0)
		return (0);
	if (n >> index & 1)
		return (1);
	else
		return (0);
}
