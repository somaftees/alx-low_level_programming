#include "main.h"

/**
  *jack_bauer - Prints every minute of the day of Jack Bauser
  *Return: Void
  */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = a; b <= 9; b++)
		{
			if ((a <= 1 && b <=9) || (a <= 2 && b <= 3))
			{
				for (c = a; c <= 5; c++)
				{
					for (d = a; d <= 9; d++)
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(50);
					        _putchar(c + '0');
					        _putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
