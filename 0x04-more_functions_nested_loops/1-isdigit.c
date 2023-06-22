/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isdigit -Checks for a digit
 *@c: 1st argument
 *
 *Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

