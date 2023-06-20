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

			if (f == '0' && d > 0 && c >= 0)
				_putchar(' ');
			else if (d == 0 && c >= 0)
				;
			else
				_putchar(f);
			_putchar(e % 10 + 48);
			if (d != 9)
				_putchar(',');
			putchar(' ');
			if (d == 9)
				_putchar('\n');
			++d;
		}
		++c;
	}
}



