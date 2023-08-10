#include "main.h"

/**
 * _strln - a function that detremine the lenght of string
 * @c: char
 * Return: always
 */

unsigned int _strln(char *c)
{
	unsigned int k = 0;

	while (c[k])
	{
		k++;
	}
	return (k);
}

/**
  * *string_nconcat- a function that concatenates two strings.
  * @s1: char
  * @s2: char
  * @n: unsigned int
  * Return: If the function fails, it should return NULL
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, n2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n > _strln(s2))
	{
		n = _strln(s2);
	}
	s = malloc(sizeof(s1) + (n * sizeof(char) + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	n2 = _strln(s1);
	for (i = 0; i <= n2; i++)
	{
		s[i] = s1[i];
	}
	i--;
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
