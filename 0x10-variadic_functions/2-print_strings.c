#include "variadic_functions.h"
/**
 * print_strings -function that prints a sting followed by new line
 *
 * @separator: is the string to be printed between strings.
 * @n: number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list list_string;

	va_start(list_string, n);

	for (i = 1; i <= n; i++)
	{
		string = va_arg(list_string, char *);
		if (!string)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator && i != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list_string);
}

