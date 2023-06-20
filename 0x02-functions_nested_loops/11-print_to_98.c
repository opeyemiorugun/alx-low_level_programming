/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_to_98 -Prints all natural numbers from 0 to 98
 * @n: 1st argument
 *
 */
void print_to_98(int n)
{
	int pos, x;


	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 0)
			{
				dec = n * -1;
				if (dec != 10)
					negative(dec);
				else
					negative(dec);
			}
			if (n >= 10)
				digit_to_char(n);
			else if (n <= 9 && n >= 0)
				digit_to_char(n);
			comma_in_middle(n, 98);
			++n;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n >= 10 && n < 100)
				digit_to_char(n);
			else if (n >= 100)
				digit_to_char(n);
			else
				digit_to_char(n);
			comma_in_middle(n, 98);
			--n;
		}
	}
	_putchar('\n');
}
/**
 * digit_to_char -Convert numbers to character
 * @number -1st argument
 *
 */
int digit_to_char(int number)
{
	int x;
	if (number >= 10 && number < 100)
	{
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
/**
 * comma_in_middle -Inserts comma in the midst of list
 * @number -1st argument
 * @limit -2nd argument
 *
 */
int comma_in_middle(int number, int limit)
{
	if (number != limit)
	{
		_putchar(',');
		_putchar(' ');
	}
}
/**
 * negative -Negates a number
 * @number -1st argument
 *
 */
int negative('-');
{
	digit_to_char(number);
