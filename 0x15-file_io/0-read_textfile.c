#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: const char.
 * @letters: size_t.
 * Return:the number, or 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openn, readd, writee;
	char *b;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	openn = open(filename, O_RDONLY);
	readd = read(openn, b, letters);
	writee = write(STDOUT_FILENO, b, readd);

	if (openn == -1 || readd == -1 || writee == -1 || writee != readd)
	{
		free(b);
		return (0);
	}

	free(b);
	close(openn);

	return (writee);
}
