#include "main.h"
/**
 * reverse_array -rveverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int b[n];
	int i, j = 0, k = 1;

	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		*(a + j) = *(b + n - k);
		j++;
		k++;
	}
}
