#include "function_pointers.h"

/**
 * array_iterator - a function given as
 * a parameter on each element of an array.
 * @array: integer pointer.
 * @size: the size of the array.
 * @action: a pointer to the function you need to use.
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t h;

	if (array && action)
	{
		h = 0;

		while (h < size)
		{
			action(array[h]);
			h++;
		}
	}
}
