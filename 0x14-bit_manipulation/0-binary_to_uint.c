#include "main.h"

/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int.
 * @b: const char.
 * Return: converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		sum <<= 1;
		if (b[i] == '1')
			sum += 1;
	}
	return (sum);
}
