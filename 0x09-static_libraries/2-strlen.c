#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 * Return: (l) the length of a string
 */
int _strlen(char *s)
{
	int l = 0;

	for (; *s++;)
		l++;
	return (l);
}
