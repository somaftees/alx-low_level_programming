#include "lists.h"
/**
 * list_len - a function that return the number
 * of elements in a linked list.
 * @h: list pointer.
 * Return: t.
 */
size_t list_len(const list_t *h)
{
	int t = 0;

	while (h != NULL)
	{
		t++;
		h = h->next;
	}
	return (t);
}
