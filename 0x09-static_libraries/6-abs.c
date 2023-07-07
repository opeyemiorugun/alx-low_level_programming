/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _abs -prints the absolute value of the number
 * @n: 1st argument
 *
 * Return: the absolute value of a value.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}

