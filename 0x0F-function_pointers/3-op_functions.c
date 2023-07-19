#include "3-calc.h"
/**
 * op_add -adds two integers
 *
 * @a: 1st argument
 * @b: 2nd argument
 * Return: sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub -subtracts two integers
 *
 * @a: 1st argument
 * @b: 2nd argument
 * Return: the difference of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul -product of two integers
 *
 * @a: 1st argument
 * @b: 2nd argument
 * Return: product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div -divides two integers
 *
 * @a: 1st argument
 * @b: 2nd argument
 * Return: result of the division of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod -modulus of two integers
 *
 * @a: 1st argument
 * @b: 2nd argument
 * Return: remainder of the division of two integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
