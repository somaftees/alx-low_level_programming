#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: list.
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
