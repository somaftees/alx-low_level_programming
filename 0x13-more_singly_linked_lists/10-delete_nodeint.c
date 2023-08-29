#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list.
 * @head: list
 * @index: unsigned int.
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *h;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
		return (1);
	}
	t = *head;
	for (i = 0; i < index && t; i++)
	{
		h = t;
		t = t->next;
	}
	if (i == index)
	{
		h->next = t->next;
		free(t);
		return (1);
	}
	return (-1);
}
