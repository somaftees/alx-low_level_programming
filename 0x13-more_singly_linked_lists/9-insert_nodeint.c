#include "lists.h"

/**
  * *insert_nodeint_at_index-  a function that inserts
  * a new node at a given position.
  * @head: list.
  * @idx: unsigned int.
  * @n: integer.
  * Return: the address of the new node, or
  * NULL if it failed.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *t, *r;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		t = *head;
		for (i = 0; i < idx - 1 && t != NULL; i++)
		{
			t = t->next;
		}
		if (t == NULL)
			return (NULL);
	}
	r = malloc(sizeof(listint_t));
	if (r == NULL)
		return (NULL);
	r->n = n;
	if (idx == 0)
	{
		r->next = *head;
		*head = r;
		return (r);
	}
	r->next = t->next;
	t->next = r;
	return (r);
}
