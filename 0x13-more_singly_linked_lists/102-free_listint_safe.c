#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: list.
 * Return: the size of the list that was free’d.
 */

size_t free_listint_safe(listint_t **h)
{
	int f;
	size_t l = 0;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		f = *h - (*h)->next;
		if (f > 0)
		{
			tmp = (*h)->next;
			*h = tmp;
			l++;
		}
		else
		{
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
