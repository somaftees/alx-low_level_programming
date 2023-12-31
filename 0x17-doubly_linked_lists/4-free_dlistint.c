#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: dlistint_t.
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head != NULL)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
