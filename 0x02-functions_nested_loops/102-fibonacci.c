#include <stdio.h>
void comma_in_middle(int number, int limit);
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
	long sum = x + y;


	printf("%lu, %lu, ", x, y);
	for (i = 3; i <= 50; ++i)
	{
		printf("%lu", sum);
		x = y;
		y = sum;
		sum = x + y;
		comma_in_middle(i, 50);
	}
	return (0);
}
/**
 * comma_in_middle -Inserts comma in the midst of list
 * @number: 1st argument
 * @limit: 2nd argument
 *
 * Return: a comma
 */
void comma_in_middle(int number, int limit)
{
	if (number != limit)
	{
		putchar(',');
		putchar(' ');
	}
}
