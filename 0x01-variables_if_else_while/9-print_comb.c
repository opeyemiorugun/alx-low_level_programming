#include <stdio.h>
/**
 * main - This is a description
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;


	for (letter = 0; letter <= 9; ++letter)
	{
		putchar(48 + letter);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

