#include "main.h"

/**
 * _strlen - a function that finds the length of a string.
 * @str: char.
 * Return: length of the string.
 */

size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: const char.
 * @text_content: char
 * Return: 1 or-1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t i;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
		i = write(f, text_content, _strlen(text_content));
	close(f);
	if (i == -1)
		return (-1);
	return (1);
}
