#include "lists.h"

/**
 * dlistint_len - a function that returns the number
 * of elements in a linked dlistint_t list.
 *@h: const ptr.
 * Return: size_t.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t idx;

	for (idx = 0; h != NULL; idx++)
		h = h->next;
	return (idx);
}
