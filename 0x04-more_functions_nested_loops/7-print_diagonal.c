#include "main.h"
/**
 * print_diagonal -function that draws a diagonal line on the terminal.
 * @n: 1st argument
 *
 * Return: the character '\'
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (i == 1)
				;
			else
			{
				j = 0;
				while (j < i)
				{
					_putchar(' ');
					j++;
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n);
}

