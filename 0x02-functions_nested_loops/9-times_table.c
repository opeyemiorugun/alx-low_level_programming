/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * times_table -prints the 9 timestable
 *
 * Return: 9x timetable.
 */
void times_table(void)
{
	int c, d, e, f;


	c = 0;
	while (c < 10)
	{
		d = 0;
		while (d < 10)
		{
			e = c * d;
			f = e / 10 + 48;

			if (e > 9)
			{
				_putchar(e / 10 + 48);
				_putchar(e % 10 + 48);
			else if (d != 0)
			{
				_putchar(' ');
				_putchar(e + '0');
			}
			else
				_putchar(e + 48);
			if (d != 9)
				_putchar(',');
				_putchar(' ');
			++d;
		}
		_putchar('\n');
		++c;
	}
}



