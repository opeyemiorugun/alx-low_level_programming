#include "main.h"
/**
 * print_number -function that prints an integer.
 * @n: 1st argument
 *
 * Return: integer
 */
void print_number(int n)
{
	int count = 0, reverse = 0;
	int s, digit, n1;

	s = n;
	n1 = n;
	do {
		s /= 10;
		++count;
	} while (s != 0);
	while (n1 != 0)
	{
		reverse = reverse * 10;
		reverse = reverse + (n1 % 10);
		n1 = n1 / 10;
	}
	digit = reverse;
	while (count--)
	{
		if (digit < 0)
		{
			digit = digit * -1;
			_putchar('-');
		}
		_putchar(digit % 10 + 48);
		digit = digit / 10;
	}
}

