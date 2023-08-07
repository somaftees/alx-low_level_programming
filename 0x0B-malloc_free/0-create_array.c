#include "main.h"
#include <stdlib.h>

/**
  * char *create_array- function that creates an array of chars,
  * and initializes it with a specific char
  * @size: integer
  * @c: char
  * Return: a pointer to array, or NULL
  */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
