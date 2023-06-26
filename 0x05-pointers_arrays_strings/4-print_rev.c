#include "main.h"
/**
 * print_rev -prints a string in reverse followed by a new line
 * @s: 1st argument
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	while (len--)
	{
		if (s[len] == '\0')
			break;
		_putchar(s[len]);
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

