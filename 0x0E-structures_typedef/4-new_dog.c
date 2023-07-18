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
 * *_strcpy -function that prints the copies of the string
 * @dest: 1st argument
 * @src: 2nd argument
 *
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		*(dest + l) = *(src + l);
	}
	*(dest + l) = '\0';
	return (dest);
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

	ptr_dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (ptr_dog->name == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}
	ptr_dog->name = _strcpy(ptr_dog->name, name);

	ptr_dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (ptr_dog->owner == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}
	ptr_dog->owner = _strcpy(ptr_dog->owner, owner);

	ptr_dog->age = age;
	return (ptr_dog);
}

