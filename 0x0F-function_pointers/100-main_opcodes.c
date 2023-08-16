#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 * @argc:integer.
 * @argv: char pointer.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
	printf("Error\n");
	exit(2);
	}
	arr = (char *)main;

	for (i = 0; i < b; i++)
	{
	if (i == b - 1)
	{
	printf("%02hhx\n", arr[i]);
	break;
	}
	printf("%02hhx ", arr[i]);
	}
	return (0);
}
