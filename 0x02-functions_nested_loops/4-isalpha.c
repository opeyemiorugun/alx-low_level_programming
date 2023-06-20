/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isalpha -Checks for alphabetic characters
 * @c: 1st argument
 *
 * Return: 1 if lowercase or uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		if (c >= 91 && c <= 96)
			return (0);
		else
			return (1);
	}
	else
		return (0);
}

