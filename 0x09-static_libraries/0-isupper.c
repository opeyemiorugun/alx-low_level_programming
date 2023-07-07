/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isupper -Checks for uppercase alphabets
 *@c: 1st argument
 *Return: 1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

