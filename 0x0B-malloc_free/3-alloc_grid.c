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
	/*Change variable names for ease*/
	int column, row;

	column = width;
	row = height;
	if (row <= 0 || column <= 0)
		return (NULL);
	/*STEP 1: Dynamically Allocate an Array of Rows Pointers.*/
	/*First, we dynamically allocate an array of pointers,*/
	/*where each of these pointers will later point to a row in the 2D array*/
	array = (int **) malloc(row * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	/*STEP 2: Dynamically Allocate Each Row. */
	/*Second, we dynamically allocate 1D arrays each corresponding to a row.*/
	for (i = 0; i < row; i++)
	{
		array[i] = (int *) malloc(column * sizeof(int));
		/*ATTEMPT TO FREE ARRAY*/
		if (array[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}
	/*STEP 3: Assign a value to each element*/
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
			/*array[row][column]*/
			array[i][j] = 0;
	}
	return (array);
}
