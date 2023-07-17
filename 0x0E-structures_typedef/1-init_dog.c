#include "dog.h"
/**
 * init_dog -initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: 1st argument
 * @age: 2nd argument
 * @owner: 3rd argument
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
