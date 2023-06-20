/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_last_digit -Prints last digit
 *@n: 1st argument
 *
 * Return: last digit of the number entered
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
		_putchar(n + 48);
		return (n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}

