/* more headers goes there */
#include <stdio.h>
void print_alphabet_x10(void);
/* betty style doc for function main goes there */
/**
 * main -Alphabets Lowercase Only
 *
 * Description: 'Prints Alphabets in lowercase ten times'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
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

