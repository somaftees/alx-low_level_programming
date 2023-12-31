#include "lists.h"

/**
  * free_listint2- a function that frees a listint_t list.
  * @head: list.
  * Return: void.
  */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
}
