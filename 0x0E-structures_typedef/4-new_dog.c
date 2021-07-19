#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner of the dog
 *
 * Return: pointer to the new dog instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;

	dg = malloc(sizeof(dg));
	if (dg == NULL)
		return (NULL);
	dg->name = name;
	dg->age = age;
	dg->owner = owner;

	return (dg);
}
