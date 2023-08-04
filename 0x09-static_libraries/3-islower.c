#include "main.h"
/**
  * _islower - Checks for lowercase charcter
  * @c: The charcter to be checked
  * Return: 1 for lowercase charcter or 0 for anything else
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
