#include "lists.h"
/**
 * reverse_listint - function
 *
 * @head: list
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t, *h;

	if (!head || !*head)
		return (NULL);
	h = *head;
	*head = NULL;
	while (h != NULL)
	{
		t = h->next;
		h->next = *head;
		*head = h;
		h = t;
	}
	return (*head);
}
