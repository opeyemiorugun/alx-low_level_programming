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
	int b;


	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		if (letter == 'e' || letter == 'q')
			b = 1;
		else
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
