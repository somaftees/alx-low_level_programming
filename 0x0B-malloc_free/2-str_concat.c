#include "main.h"
#include <stdlib.h>

/**
  * *str_concat- a function that concatenates two strings
  * @s1: char pointer
  * @s2: char pointer
  * Return: NULL on failure
  */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[i])
	{
		i++;
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[j])
	{
		j++;
	}
	arr = malloc(sizeof(char) * (i + j + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (k <= i)
	{
		arr[k] = s1[k];
		k++;
	}
	k--;
	for (i = 0; i <= j; i++)
	{
		arr[k] = s2[i];
		++k;
	}
	return (arr);
}
