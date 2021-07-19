#include <stdlib.h>
#include "dog.h"

char *_strdup(char *str);

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

	if (name == NULL || owner == NULL)
		return (NULL);

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);
	dg->name = _strdup(name);
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->age = age;
	dg->owner = _strdup(owner);
	if (dg->owner == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}

	return (dg);
}


/**
 * _strdup - duplicate a string
 *
 * @str: the string to copy
 *
 * Return: pointer to the newly allocated space in memory,
 *	   NULL if @str is null, or insufficient memory available
 */
char *_strdup(char *str)
{
	char *newstr;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (*(str + len++))
		;
	newstr = malloc(len * sizeof(char));
	if (newstr == NULL)
		return (NULL);

	i = 0;
	while (*(str + i))
	{
		*(newstr + i) = *(str + i);
		++i;
	}
	*(newstr + i) = '\0';
	return (newstr);
}
