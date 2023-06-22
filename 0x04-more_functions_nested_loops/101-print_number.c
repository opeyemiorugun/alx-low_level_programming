#include "main.h"
/**
 * print_number -function that prints an integer.
 * @n: 1st argument
 *
 * Return: integer
 */
void print_number(int n)
{
	int x, y;

	if (n >= 10 && n < 100)
	{
		_putchar(n / 10 + 48);
		_putchar(n % 10 + 48);
	}
	else if (n >= 100 && n < 1000)
	{
		x = n / 10;
		_putchar(x / 10 + 48);
		_putchar(x % 10 + 48);
		_putchar(n % 10 + 48);
	}
	else if (n >= 1000 && n < 10000)
	{
		x = n / 10;
		y = x / 10;
		_putchar(y / 10 + 48);
		_putchar(y % 10 + 48);
		_putchar(x % 10 + 48);
		_putchar(n % 10 + 48);
	}
	else if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		_putchar(n / 10 + 48);
		_putchar(n % 10 + 48);
	}
	else
		_putchar(n + 48);
}

