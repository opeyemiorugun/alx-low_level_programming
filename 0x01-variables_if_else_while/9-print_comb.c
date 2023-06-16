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
	int letter = 0;


	while (letter < 10)
	{
		putchar(48 + letter);
		if (letter == 9)
			break;
		putchar(',');
		putchar(' ');
		++letter;
	}
	putchar('\n');
	return (0);
}

