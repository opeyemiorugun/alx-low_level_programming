#include "main.h"
/**
 * real_prime_number -function to find prime number
 * @n: number
 * @c: divider
 * Return: 0 if not a prime number and prime number if if.
 */
int real_prime_number(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (real_prime_number(n, 2));
}
/**
 * is_prime_number -function to find prime number
 * @n: number
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n < 0)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	return (real_prime_number(n, 2));
}

