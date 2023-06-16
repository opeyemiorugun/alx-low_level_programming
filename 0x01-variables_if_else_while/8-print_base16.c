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
	char letter;


	for (letter = '0'; letter <= 'f'; ++letter)
	{
		if (letter >= 58 && letter < 97)
			;
		else
			putchar(letter);
	}
	putchar('\n');
	return (0);
}

