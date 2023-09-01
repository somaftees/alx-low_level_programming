#include "main.h"

/**
 * flip_bits - a function that returns the
 * number of bits you would need to flip to
 * get from one number to another.
 * @n: unsigned long integer.
 * @m: unsigned long integer.
 * Return: unsigned integer.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int f = 0;

	x = n ^ m;
	while (x > 0)
	{
		if ((x & 1) != 0)
			f++;
		x = x >> 1;
	}
	return (f);
}
