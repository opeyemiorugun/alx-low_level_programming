/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_sign -prints the sign of the number
 * @n: 1st argument
 *
 * Return: 1 and prints + if n is greater than zero,
 * 0 and prints 0 if n is zero, -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

