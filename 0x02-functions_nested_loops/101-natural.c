#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Natural number's sum
 *
 * Description: 'this program sums up multiples of 3 and 5'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum = 0;


	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

