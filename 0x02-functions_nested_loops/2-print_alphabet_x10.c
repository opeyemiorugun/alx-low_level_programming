/* more headers goes there */
#include "main.h"
/**
 * print_alphabet_x10 -function to print letters ten times
 */
void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i <= 10)
	{
		for (letter = 'a'; letter <= 'z'; ++letter)
			putchar(letter);
		putchar('\n');
	++i;
	}
}

