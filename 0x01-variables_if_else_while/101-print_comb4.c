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
	int num1;
	int num2, num3;


	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				if (num1 == num2)
					;
				else
				{
					putchar(48 + num1);
					putchar(48 + num2);
					putchar(48 + num3);
					if (num1 < 7 || num2 < 8 || num3 < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

