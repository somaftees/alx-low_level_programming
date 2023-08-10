#include "main.h"

/**
  * *string_nconcat- a function that concatenates two strings.
  * @s1: char
  * @s2: char
  * @n: unsigned int
  * Return: If the function fails, it should return NULL
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, z;
	char *s3;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; ++i)
		;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; ++j)
		;
	}
	if (j > n)
		j = n;
	s3 = malloc(sizeof(char) * (i + j + 1));
	if (s3 == NULL)
		return (NULL);
	for (z = 0; z < i; z++)
		s3[z] = s1[z];
	for (z = 0; z < j; z++)
		s3[z + i] = s2[z];
	s3[i + j] = '\0';
	return (s3);
}
