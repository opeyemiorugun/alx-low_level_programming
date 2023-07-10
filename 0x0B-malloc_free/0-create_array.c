#include "main.h"
#include <stdlib.h>
/**
 * create_array -create an array of chars, and initializes it with a
 * specific char.
 * @size: size in bytes that is to be allocated
 * @c: charcater to be initialized
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
