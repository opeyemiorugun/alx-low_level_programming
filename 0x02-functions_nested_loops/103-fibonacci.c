#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - This is a description
 *
 * Description: 'Fibonacci series'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long x = 1, y = 2;
	long sum = x + y, total = 0;


	for (i = 3; i <= 50; ++i)
	{
		if (sum % 2 == 0 && sum <= 4000000)
		{
			total += sum;
		}
		x = y;
		y = sum;
		sum = x + y;
	}
	total += 2;
	printf("%lu\n", total);
	return (0);
}

