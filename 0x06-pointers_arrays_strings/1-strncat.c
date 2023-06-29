#include "main.h"
/**
 * _strncat -function that concatenates n bytes of one string to
 * another string
 * @dest: 1st argument
 * @src: concatenated
 * @n: bytes
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, m = 0, p, r, i, q;

	for (l = 0; dest[l] != '\0'; l++)
	{
		p++;
	}
	for (q = 0; src[q] != '\0'; q++)
	{
		;
	}
	q = q - 1;
	n = n - 1;
	r = l + n;
	l = 0;
	for (i = 0; i <= r; i++)
	{
		if ((dest[l] == '\0' || i > p) && n >= 0 && m < q)
		{
			*(dest + i) = *(src + m);
			m++;
			n--;
		}
		else
		{
			;
		}
		l++;
	}
	return (dest);
}

