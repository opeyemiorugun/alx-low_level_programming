#include "main.h"
/**
 * binary_to_uint -function to convert a binary to a decimal
 *
 * @b: b is pointing to a string of 0 and 1 chars.
 * Return: the converted number or 0, if the number is neither 0 or 1.
 * 0, if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i = 0, k = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		i++;
	}

	while (i--)
	{
		if ((b[i] - 48) == 0 || (b[i] - 48) == 1)
			dec += ((b[i] - 48) << k);
		else
			return (0);
		k++;
	}

	return (dec);
}
