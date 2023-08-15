#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: char
 * @age: float
 * @owner: char
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, i, o;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;
	dog->name = malloc(n * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;
	dog->owner = malloc(o * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
