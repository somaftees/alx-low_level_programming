#include "lists.h"

/**
  * *add_nodeint- a function that adds a new node
  * at the beginning of a listint_t list.
  * @head: pointer to a pointer.
  * @n: const int.
  * Return: the address of the new element,
  * or NULL if it failed.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (head == NULL)
		return (NULL);
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	*head = p->next;
	*head = p;
	return (p);
}
