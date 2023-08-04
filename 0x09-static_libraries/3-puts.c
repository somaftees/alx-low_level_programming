#include "main.h"

/**
 * _puts - prints a string
 * @s: char to check
 *
 * Return: the length of the string
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
