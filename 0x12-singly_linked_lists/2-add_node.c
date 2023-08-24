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
 * *add_node - a function that adds a new node
 * at the beginning of a list_t list.
 * @head: list.
 * @str: const char.
 * Return: the address of thee new element or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *k;

	k = malloc(sizeof(list_t));
	if (k == NULL || head == NULL)
		return (NULL);
	if (str)
	{
		k->str = strdup(str);
		if (!k->str)
		{
			free(k);
			return (NULL);
		}
		k->len = _strlen(str);
	}
	k->next = *head;
	*head = k;

	return (*head);
}
