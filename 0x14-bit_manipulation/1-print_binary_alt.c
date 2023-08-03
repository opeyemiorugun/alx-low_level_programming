#include "main.h"
/**
 * print_binary -function to convert number form decimal to binary.
 *
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long long int k = 1, bit, bin = 0;

	while  (n > 0)
	{
		if (n & 1)
			bit = 1;
		else
			bit = 0;

		bin += (bit * k);
		k *= 10;
		n = n >> 1;
	}
	printf("%llu\n", bin);
}
