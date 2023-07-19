#include "function_pointers.h"
/**
 * int_index -function that searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: point to the function to be used to compare values.
 * Return: the index for the first element for which the cmp function return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			break;
		if (i == (size - 1))
			return (-1);
	}
	return (i);
}
