#include "lists.h"

/**
 * find_listint_loop - a function that finds
 * the loop in a linked list.
 * @head: list.
 * Return: The address of the node where the
 * loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t = NULL;

	while (head)
	{
		head = head->next;
	}
	return (t);
}
