#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: dlistint_t ptr to ptr.
 * @index: unsigned int.
 * Return: 1 or -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
