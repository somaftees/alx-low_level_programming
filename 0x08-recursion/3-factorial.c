#include "main.h"

/**
  * factorial -  a function that returns the factorial of a given number.
  * @n: an int number
  * Return: -1, 1 or n * factorial(n - 1).
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
