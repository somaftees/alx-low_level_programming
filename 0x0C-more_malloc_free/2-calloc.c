#include "main.h"
/**
 * *_calloc -  function allocates memory for an array of-
 * nmemb elements of size bytes each and returns-
 * a pointer to the allocated memory.
 * @nmemb: integer
 * @size: integer
 * Return: a pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	t = malloc(size * nmemb);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		t[i] = 0;
	return (t);
}
