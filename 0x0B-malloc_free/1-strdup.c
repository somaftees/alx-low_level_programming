#include "main.h"
#include <stdlib.h>

/**
  * *_strdup- returns a pointer to a newly allocated space in memory
  * which contains a copy of the string given as a parameter.
  * @str: string
  * Return: NULL or arr
  */

char *_strdup(char *str)
{
	int i, j = 0;
	char *arr = malloc((j * sizeof(char)) + 1);

	if (str == NULL || arr == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
