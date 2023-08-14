#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * *new_dog - returns the length of a string
 * @name: name to cpy
 * @age: age
 * @owner: owner to cpy
 * Return: the length of the string
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
		return (NULL);


	if (newDog == NULL)
		return (NULL);

	newDog->name = strdup(name);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	newDog->owner = strdup(owner);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	return (newDog);
}
