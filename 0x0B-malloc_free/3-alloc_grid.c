#include "main.h"
#include "stdlib.h"
/**
 * alloc_grid -returns a pointer to a 2 dimensional array of integers.
 * @width: Number of columns
 * @height: Number of rows
 * Return: Null on failure and if width or height is 0 or negative,
 * return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(*array) * width);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(sizeof(*array[i]) * height);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}

