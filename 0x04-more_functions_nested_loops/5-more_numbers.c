#include "main.h"
/**
 * more_numbers -prints numbers 0 to 14 ten times
 *
 * Return: numbers from 0 to 14
 */
void more_numbers(void)
{
	int c, i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}

