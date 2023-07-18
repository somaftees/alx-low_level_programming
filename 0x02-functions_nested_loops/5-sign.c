#include "main.h"

/**
  * print_sign - Prints the sign of a number.
  * @c: The number to be checked.
  * Return: 1 for positive number, -1 for negative numberi
  * or 0 for anything else.
  * n: Is a number
  */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(40);
		return (0);
	}
}
