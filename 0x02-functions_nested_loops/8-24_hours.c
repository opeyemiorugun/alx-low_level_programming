/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * jack_bauer -prints the absolute value of the number
 *
 * Return: the minutes of the day.
 */
void jack_bauer(void)
{
	int c, d;


	c = 0;
	while (c < 24)
	{
		d = 0;
		while (d < 60)
		{
			_putchar(c / 10 + 48);
			_putchar(c % 10 + 48);
			_putchar(':');
			_putchar(d / 10 + 48);
			_putchar(d % 10 + 48);
			_putchar('\n');
			++d;
		}
		++c;
	}
}

