#include "main.h"
#include <stdlib.h>
/**
 * _realloc -function that reallocates a memory using malloc and free.
 * @ptr: pointer to reallocate
 * @old_size: old size of pointer
 * @new_size: new size of pointer
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i = 0;
	char **pp;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (ptr == NULL)
		return (p);

	pp = ((char **) &ptr);
	while (old_size--)
	{
		*(p + i) = *(*pp + i);
		i++;
	}
	free(ptr);
	return (p);
}
