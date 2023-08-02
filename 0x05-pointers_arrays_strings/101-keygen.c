#include "main.h"
#include <time.h>
#include <stdlib.h>

/**
 *
 * main - entry point
 * 
 * Return: Always (0)
 */
int main(void)
{
	int f;
	char i;
	int target = 2772;

	srand(time(0));
	while (f <= target)
	{
		i = rand() % 123;
		f += i;
		putchar(i);
	}
	putchar(target - f);
	return (0);
}
