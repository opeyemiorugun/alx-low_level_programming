#include "main.h"
/**
 * print_triangle -function that prints a triangle, followed by a new line
 * @size: 1st argument
 *
 * Return: the character '#'
 */
void print_triangle(int size)
{
	int i, j, count = size, dec;
	int count_int = 1;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			j = 0;
			dec = 1;
			while (--count)
			{
				_putchar(' ');
				dec++;
			};
			count = dec - 1;
			while (count_int--)
			{
				_putchar('#');
				j++;
			}
			count_int = j + 1;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

