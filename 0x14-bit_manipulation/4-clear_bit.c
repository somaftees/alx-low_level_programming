#include "main.h"

/**
 * clear_bit - a function that sets the
 * value of a bit to 0 at a given index
 * @n: unsigned long integer.
 * @index: unsigned integer.
 * Return: 1 if it worked, or
 * -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);
	*n = *n & (~(1UL << index));
	return (1);
}
