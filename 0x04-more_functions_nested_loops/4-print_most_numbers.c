/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_most_numbers -prints digit except 2 and 4
 *
 *Return: digits form 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			;
		else
			_putchar(c);
	}
	_putchar('\n');
}

