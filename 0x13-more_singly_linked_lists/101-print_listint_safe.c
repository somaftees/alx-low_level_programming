#include "lists.h"

/**
 * print_listint_safe - a function that prints
 * a listint_t linked list.
 * @head: list.
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t t = 0;
	long int f;

	while (head)
	{
		f = head - head->next;
		t++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (f > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (t);
}
