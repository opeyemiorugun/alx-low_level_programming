#include <stdio.h>
/**
 * main -program that finds and prints the largest prime factor of
 * number 612852475143, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	size_t divider, number, remainde = 1, largest = 0;

	do {
		divider++;
		number = 612852475143;

		if (number % divider == 0 && (divider % 2 != 0 || divider== 2))
		{
			remainde = number / divider;
			if (largest > divider)
			{
				printf("%lu\n", largest);
				break;
			}
			else
			{
				largest = divider;
			}
		}
		number = remainde;
	} while (remainde < 0);
	return (0);
}

