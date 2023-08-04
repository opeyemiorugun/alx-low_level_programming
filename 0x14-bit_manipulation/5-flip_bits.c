#include "main.h"
/**
 * flip_bits -function that returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: 1st argument
 * @m: 2nd argument
 * Return: number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int count;

	count = n ^ m;

	while (count > 0)
	{
		if (count & 1)
			flip++;
		count = count >> 1;
	}
	return (flip);
}
