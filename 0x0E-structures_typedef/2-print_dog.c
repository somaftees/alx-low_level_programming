#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - a function that prints a struct dog.
 * struct dog - a structer.
 * @d: a pointer.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(0);
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
