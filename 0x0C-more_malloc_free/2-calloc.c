#include "main.h"
#include <stdlib.h>
/**
 * _calloc -a copy of the calloc function using malloc
 * @nmemb: no. of elements
 * @size: size of each element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < (nmemb * size); j++)
	{
		*(p + j) = 0;
	}
	return (p);
}
