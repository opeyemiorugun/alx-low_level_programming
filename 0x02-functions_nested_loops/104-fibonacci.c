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
	long x_head, x_tail, y_head, y_tail;
	long overflow, sum_tail, sum_head;


	printf("%lu, %lu, ", x, y);
	for (i = 3; i <= 98; ++i)
	{
		if (i >= 93)
		{
			x_head = x / 100000000;
			x_tail = x % 100000000;
			y_head = y / 100000000;
			y_tail = y % 100000000;
			overflow = (x_tail + y_tail) / 10;
			sum_tail = (x_tail + y_tail) % 10;
			sum_head = (x_head + y_head + overflow);
			printf("%lu%lu", sum_head, sum_tail);
		}
		else
			printf("%lu", sum);
		x = y;
		y = sum;
		sum = x + y;
		comma_in_middle(i, 98);
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
