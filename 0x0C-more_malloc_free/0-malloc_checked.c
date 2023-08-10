#include "main.h"

/**
  * *malloc_checked- Write a function that allocates memory using malloc
  * @b: unsigned int
  * Return: a pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
