#include "variadic_functions.h"
/**
 * print_numbers -function that prints numbers followed by a new line
 *
 * @separator: is the string to be printed between the numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_print;

	va_start(list_print, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(list_print, int));
		if (separator !=  NULL && i != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list_print);
}
