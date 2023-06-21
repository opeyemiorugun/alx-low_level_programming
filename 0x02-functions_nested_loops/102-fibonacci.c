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
	int i, n;
	int x = 1, y = 2;
	int sum = x + y;


	printf("%d, %d, ", x, y);
	for (i = 3; i <= 50; ++i)
	{
		printf("%d, ", sum);
		x = y;
		y = sum;
		sum = x + y;
	}
	return (0);
}

