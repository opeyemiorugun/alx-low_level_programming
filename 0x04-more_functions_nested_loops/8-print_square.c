#include "main.h"
/**
 * print_square -function that prints a square, followed by a new line.
 *
 * @size: 1st argument
 *
 * Return: charater #
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			j = 1;
			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

