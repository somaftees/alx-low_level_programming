#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node
 * at the end of a dlistint_t list.
 * @head: dlistint_t ptr to ptr.
 * @n: const int.
 * Return: dlistint_t.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
