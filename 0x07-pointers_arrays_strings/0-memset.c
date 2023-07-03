#include "main.h"
/**
 * _memset -function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
 * @s: Memory area
 * @b: Byte tobe filled
 * @n: 3rd argument
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(s + j) = b;
	}
	return (s);
}
