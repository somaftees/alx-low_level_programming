#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: string pointer
 * Return:  a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	int j, i = 0;
	char *arr;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	arr = malloc(sizeof(char) * (i + 1));
	if (!arr || !str)
		return (NULL);
	for (j = 0; j <= i; j++)
		arr[j] = str[j];
	return (arr);
}
