#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list.
 * @h: const otr.
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t idx;

	for (idx = 0; h != NULL; idx++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (idx);
}
