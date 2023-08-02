#include "main.h"

/**
  * _strlen_recursion - a function that returns the length of a string.
  * @s: a pointer of string
  * Return: int @h
  */

int _strlen_recursion(char *s)
{
	int h = 0;

	if (*s > '\0')
	{
		h++;
		h += _strlen_recursion(s + 1);
	}
	return (h);
}
