#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: 1st argument
 */
void puts_half(char *str)
{
	int len, i = 0, k, p;

	len = _strlen(str);
	if (i % 2 == 0)
	{
		for (k = len / 2; k <= len && str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
	}
	else
	{
		p = (len - 1) / 2;
		for (k = p; k <= len; k++)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
