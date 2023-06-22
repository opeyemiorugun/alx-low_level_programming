/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_numbers -prints digit
 *
 *Return: digits form 0 to 9
 */
void print_numbers(void)
{
	int c;

	for (c = 1; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}

