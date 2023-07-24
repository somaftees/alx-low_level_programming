#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * follwed by a new line
 * @h: int to check
 * @n: int to check
 */
void print_array(int *h, int n)
{
	int t;

	for (t = 0; t < n; t++)
		if (t != n - 1)
		printf("%d, ", h[t]);
		else
			printf("%d", h[t]);
printf("\n");
}
