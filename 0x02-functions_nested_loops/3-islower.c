/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _islower -Checks for lowercase characters
 *
 * Return: 1 if lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

