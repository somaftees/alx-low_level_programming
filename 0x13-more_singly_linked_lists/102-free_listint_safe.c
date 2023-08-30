#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: list.
 * Return: the size of the list that was free’d.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t index = 0;
	int a;
	listint_t *t;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 1 || a == 1)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			index++;
		}
		if (a <= 0)
		{
			free(*h);
			*h = NULL;
			++index;
			return (index);
		}
	}
	*h = NULL;
	return (index);
}
