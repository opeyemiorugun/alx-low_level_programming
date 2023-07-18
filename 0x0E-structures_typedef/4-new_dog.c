#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strlen -function that returns the lenght of a string
 * @s: 1st argument
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (i > -1)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	return (i);
}
/**
 * new_dog -function that creates a new dog
 * @name: 1st argument
 * @age: 2nd argument
 * @owner: 3rd argument
 * Return: struct pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;

	if (!name || !owner || age < 0)
		return (NULL);

	ptr_dog = (dog_t *) malloc(sizeof(struct dog));
	if (ptr_dog == NULL)
		return (NULL);

	ptr_dog->name = malloc(sizeof(_strlen(name) + 1));
	if (ptr_dog->name == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}
	ptr_dog->name = name;

	ptr_dog->owner = malloc(sizeof(_strlen(owner) + 1));
	if (ptr_dog->owner == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}
	ptr_dog->owner = owner;

	ptr_dog->age = age;
	return (ptr_dog);
}

