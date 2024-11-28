#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - manually computes the length of a string
 * @s: the string whose length is to be calculated
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: A pointer to the new dog_t, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, name_len, owner_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	name_len = _strlen(name);
	new_dog->name = malloc(name_len + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->name[name_len] = '\0';

	owner_len = _strlen(owner);
	new_dog->owner = malloc(owner_len + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < owner_len; i++)
	{
		new_dog->owner[i] = owner[i];
	}
	new_dog->owner[owner_len] = '\0';
	new_dog->age = age;

	return (new_dog);
}
