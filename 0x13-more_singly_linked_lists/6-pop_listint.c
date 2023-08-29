#include "lists.h"

/**
  * pop_listint- a function that deletes the head node of a
  * listint_t linked list, and returns the head node’s data (n).
  * @head: list.
  * Return: i;
  */

int pop_listint(listint_t **head)
{
	listint_t *p;
	int i = 0;

	if (*head && head)
	{
		i = (*head)->n;
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	return (i);
}
