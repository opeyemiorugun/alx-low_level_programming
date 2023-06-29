#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: 1st argument
 * @src: concatenated
 *
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int l, m, n, r, i;

	for (l = 0; dest[l] != '\0'; l++)
	{
		n++;
	}
	for (m = 0; src[m] != '\0'; m++)
	{
		;
	}
	r = l + m - 1;
	l = 0;
	m = 0;
	for (i = 0; i <= r && src[m] != '\0'; i++)
	{
		if (dest[l] == '\0' || i > n)
		{
			*(dest + i) = *(src + m);
			m++;
		}
		else
		{
			;
		}
		l++;
	}
	return (dest);
}
