#include "lists.h"

/**
  * *add_nodeint_end-  a function that adds a new node
  * at the end of a listint_t list.
  * @head: list
  * @n: const int
  * Return: the address of the new element, or NULL if it failed.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *hd = *head;

	p = malloc(sizeof(listint_t));
	if (!p || !head)
		return (NULL);
	p->n = n;
	if (*head)
	{
		while (hd->next)
			hd = hd->next;
		hd->next = p;
	}
	else
		*head = p;
	return (*head);
}
