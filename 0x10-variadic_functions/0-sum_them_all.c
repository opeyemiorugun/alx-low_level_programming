#include "variadic_functions.h"
/**
 * sum_them_all -function that returns the sum of all its parameters
 *
 * @n: Integers
 * Return: the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list_sum;

	if (n == 0)
		return (0);

	/*Initializing argument to the list pointer*/
	/*va_start(va_list variable, the last optional argumnent*/
	va_start(list_sum, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list_sum, int);
	}
	va_end(list_sum);
	return (sum);
}
