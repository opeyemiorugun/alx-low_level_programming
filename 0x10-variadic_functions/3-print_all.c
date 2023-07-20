#include "variadic_functions.h"
/**
 * print_all -function that prints anything
 *
 * @format: c for char, i for int, f for float, s for string.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, flag, j = 0;
	char *string, *separator = ", ", copy[] = "cifs";
	va_list list_all;

	va_start(list_all, format);
	while (format && format[i])
	{
		j = 0;
		while (copy[j] != '\0')
		{
			if (format[i] == copy[j] && flag && i > 0)
			{
				printf("%s", separator);
				break;
			}
			j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list_all, int)), flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(list_all, int)), flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(list_all, double)), flag = 1;
			break;
		case 's':
			string = va_arg(list_all, char *);
			if (!string)
				string = ("(nil)");
			printf("%s", string), flag = 1;
			break;
		default:
			break;
		} i++;
	}
	printf("\n");
	va_end(list_all);
}
