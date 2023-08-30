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
	listint_t *first = head;
	listint_t *second = head;

	if (head == NULL)
		return  (NULL);
	if (head == head->next)
		return (head);
	while (first)
	{
		first = first->next;
		second = head;
		while (first && second != first)
		{
			if (second == first->next)
			{
				return (second);
			}
			second = second->next;
		}
	}
	return (first);
}
