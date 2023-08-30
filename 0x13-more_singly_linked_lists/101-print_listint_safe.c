#include "lists.h"

/**
 * print_listint_safe - a function that prints
 * a listint_t linked list.
 * @head: list.
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *l = NULL;
	size_t count = 0;
	size_t new;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		tmp = tmp->next;
		l = head;
		new = 0;
		while (new < count)
		{
			if (tmp == l)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (count);
			}
			l = l->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
