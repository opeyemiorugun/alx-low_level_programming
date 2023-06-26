#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: 1st argument
 */
void puts_half(char *str)
{
	int len, k, p;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		for (k = len / 2; k <= len && str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
	}
	else
	{
		p = (len - 1) / 2;
		for (k = p; k <= len && str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
/**
 * _strlen -function that returns the lenght of a string
 * @s: 1st argument
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (i > -1)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	return (i);
}

