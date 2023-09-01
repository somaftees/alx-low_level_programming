#include "main.h"

/**
 * set_bit - a function that sets the
 * value of a bit to 0 at a given index.
 * @n: unsigned long integer.
 * @index: unsigned integer.
 * Return: 1 if it worked,
 * or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = 1;

	if (index > 63)
		return (-1);
	*n = *n | k << index;
	return (1);
}
