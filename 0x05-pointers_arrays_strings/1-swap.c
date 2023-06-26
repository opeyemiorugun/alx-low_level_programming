#include "main.h"
/**
 * swap_int -swaps the values of two integers.
 * @a: 1st argument
 * @b: 2nd argument
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
