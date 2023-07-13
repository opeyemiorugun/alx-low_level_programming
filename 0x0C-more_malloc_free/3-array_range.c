#include "main.h"

#include <stdlib.h>
/**
 * array_range -function that creates an array of integers
 * @min: minumum number
 * @max: maximum number
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr =  mallloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

