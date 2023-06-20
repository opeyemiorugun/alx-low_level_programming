/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_alphabet -function to print letters
 */
void print_alphabet(void)
{
	char letter;


	for (letter = 'a'; letter <= 'z'; ++letter)
		_putchar(letter);
	_putchar('\n');
}

