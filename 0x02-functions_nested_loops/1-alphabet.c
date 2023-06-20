/* more headers goes there */
#include <stdio.h>
void print_alphabet(void);
/* betty style doc for function main goes there */
/**
 * main -Alphabets Lowercase Only
 *
 * Description: 'Prints Alphabets in lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet -function to print letters
 */
void print_alphabet(void)
{
	char letter;


	for (letter = 'a'; letter <= 'z'; ++letter)
		putchar(letter);
	putchar('\n');
}

