#include <stdio.h>
#include <math.h>
/**
 * main -program that finds and prints the largest prime factor of
 * number 612852475143, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	float divider, number, remainde = 1;
	long largest = 0;

	number = 612852475143;
	while (remainde > 0)
	{
		divider++;

		if (fmod(number, divider) == 0 && (fmod(divider, 2) != 0 || divider == 2))
		{
			remainde = number / divider;
			largest = divider;
		}
		number = remainde;
		if (fmod(remainde, 2) != 0 || remainde == 2 || number < divider)
			break;
	}
	printf("%ld\n", largest);
	return (0);
}

