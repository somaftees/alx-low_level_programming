#include "main.h"

/* more headers goes there */
/**
*  positive_or_negative - Checks the num if it is positive, negative or zero
*  printf: Output
*  @n: Input
*/
void positive_or_negative(int n)
{
if (n == 0)
printf("%d is zero\n", n);
if (n > 0)
printf("%d is positive\n", n);
if (n < 0)
printf("%d is negative\n", n);
}
