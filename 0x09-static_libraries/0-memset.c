#include "main.h"

/**
 * _memset - function fills memory area a constant byte
 * @n: bytes of the memory area pointed to by @s
 * @s: pointer to the memory area
 * @b: constant byte
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
