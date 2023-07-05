#include "main.h"
/**
 * real_sqrt_recursion -finds the square rooot of a number
 * @n: number
 * @c: potentioal root
 *
 * Return: the square root
 */
int real_sqrt_recursion(int n, int c)
{
	if (((c * c) == n) && (c < n / 2))
	{
		return (c);
	}
	else if (c == n / 2)
	{
		return (-1);
	}
	return (real_sqrt_recursion(n, c + 1));
}
/**
 * _sqrt_recursion -displays the square root of a function.
 * @n: number
 *
 * Return: square root.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (real_sqrt_recursion(n, 2));
}
