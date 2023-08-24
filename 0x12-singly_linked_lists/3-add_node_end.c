#include "lists.h"
/**
 * _strlen - a function that calculate string lenght.
 * @stri: string.
 * Return: len.
 */

int _strlen(const char *stri)
{
	int len = 0;

	while (stri[len])
		++len;

	return (len);
}
/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: list.
 * @str: const char.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *k;

	if (str == NULL)
		return (NULL);
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->len = _strlen(n->str);
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	k = *head;
	while (k->next)
		k = k->next;
	k->next = n;
	return (n);
}
