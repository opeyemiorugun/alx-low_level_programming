#include "main.h"
/**
 * print_line -function that draws a straight line in the terminal.
 * @n: 1st argument
 *
 * Return: underscore
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}

