#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * new_dog -function that creates a new dog
 * @name: 1st argument
 * @age: 2nd argument
 * @owner: 3rd argument
 * Return: struct pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ptr_dog;

	ptr_dog = malloc(sizeof(dog_t));
	if (ptr_dog == NULL)
		return (NULL);
	ptr_dog->name = name;
	ptr_dog->age = age;
	ptr_dog->owner = owner;
	return (ptr_dog);
}

