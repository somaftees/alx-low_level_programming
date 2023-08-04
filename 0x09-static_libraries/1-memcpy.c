#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: num of memory bytes
 * @src: memory area
 * @dest: memory area
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
