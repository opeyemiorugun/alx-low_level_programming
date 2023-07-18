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
	int len, len2;

	if (!name || !owner || age < 0)
	{
		return (NULL);
	}

	ptr_dog = (dog_t *) malloc(sizeof(struct dog));
	if (ptr_dog == NULL)
		return (NULL);

	len = _strlen(name) + 1;
	ptr_dog->name = malloc(sizeof(len));
	if (ptr_dog->name == NULL)
		return (NULL);
	ptr_dog->name = name;

	len2 = _strlen(owner) + 1;
	ptr_dog->owner = malloc(sizeof(len2));
	if (ptr_dog->owner == NULL)
		return (NULL);
	ptr_dog->owner = owner;

	ptr_dog->age = age;
	return (ptr_dog);
}

