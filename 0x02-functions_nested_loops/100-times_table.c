/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_times_table -prints the timestable
 *@n: 1st argument
 *Return: Timetable.
 */
void print_times_table(int n)
{
	int c, d, e;


	if (n > 0 && n < 15)
	{
		c = 0;
		while (c <= n)
		{
			d = 0;
			while (d <= n)
			{
				e = c * d;
				if (e > 9)
					digit_to_char(e);
				else if (d != 0)
				{
				_putchar(' ');
				_putchar(' ');
				_putchar(e + '0');
				}
				else
					digit_to_char(e);
				if (d != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				++d;
			}
			_putchar('\n');
			++c;
		}
	}
}
/**
 * digit_to_char -Convert numbers to character
 * @number: 1st argument
 *
 * Return: character
 */
void digit_to_char(int number)
{
	int x;


	if (number >= 10 && number < 100)
	{
		_putchar(' ');
		_putchar(number / 10 + 48);
		_putchar(number % 10 + 48);
	}
	else if (number >= 100)
	{
		x = number / 10;
		_putchar(x / 10 + 48);
		_putchar(x % 10 + 48);
		_putchar(number % 10 + 48);
	}
	else
		_putchar(number + 48);
}




