#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @s: char to check
 */
void puts2(char *s)
{
	int str;

	for (str = 0; s[str] != '\0'; str++)
	if (str % 2 == 0)
		_putchar(s[str]);
	_putchar('\n');
}
