/* more headers goes there */
#include "main.h"
/**
 * print_alphabet_x10 -function to print letters ten times
 */
void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i <= 9)
	{
		for (letter = 'a'; letter <= 'z'; ++letter)
			_putchar(letter);
		_putchar('\n');
	++i;
	}
}

