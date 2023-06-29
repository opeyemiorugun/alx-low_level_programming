#include "main.h"
/**
 * *_strncpy -function that prints the copies of the string
 * @dest: 1st argument
 * @src: 2nd argument
 * @n: chaarcters to copy
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		*(dest + l) = *(src + l);
	}
	return (dest);
}
