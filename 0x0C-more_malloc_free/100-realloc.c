#include "main.h"
/**
 * _realloc- a function that reallocates a memory block using malloc and free
 * @old_size: integer
 * @new_size: integer
 * @ptr: void
 * Return: null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
			return (NULL);
	return (pointer);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		p[i] = ((char *) ptr)[i];
	free(ptr);
	return (pointer);
}
