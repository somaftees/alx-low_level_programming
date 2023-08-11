#include "main.h"
/**
 * *array_range -a function that creates an array of integers.
 * @min: integer
 * @max: integer
 * Return: null
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, l;

	if (max < min)
		return (NULL);
	l = max - min;
	ptr = malloc(sizeof(int) * (l + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
