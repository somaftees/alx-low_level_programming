#include <stdio.h>

/**
  * my_fun - a function that prints You're beat! and yet,
  * you must allow,\nI bore my house upon my back!\n
  * before the main function is executed.
  */
void my_fun(void) __attribute__ ((constructor));

/**
  * my_fun - implements for my_fun.
  *
  * Return: void.
  */
void my_fun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
