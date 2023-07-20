#include "variadic_functions.h"
/**
 * print_all -function that prints anything
 *
 * @format: c for char, i for int, f for float, s for string.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, len  = 0;
	char *string;
	const char *separator = ", ";
	va_list list_all;

	va_start(list_all, format);
	while (format[len] != '\0')
	{
		len++;
	}
	while (i < len)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list_all, int));
			break;
		case 'i':
			printf("%d", va_arg(list_all, int));
			break;
		case 'f':
			printf("%f", va_arg(list_all, double));
			break;
		case 's':
			string = va_arg(list_all, char *);
			if (!string)
				printf("(!nil)");
			else
				printf("%s", string);
			break;
		default:
			break;
		}
		if (i < (len - 1))
			printf("%s", separator);
	       i++;
	}
	printf("\n");
	va_end(list_all);
}
