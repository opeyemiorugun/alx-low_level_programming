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
	n = n - 1;
	r = l + n;
	l = 0;
	for (i = 0; i <= r && src[m] != '\0'; i++)
	{
		if ((dest[l] == '\0' || i > p) && n >= 0)
		{
			*(dest + i) = *(src + m);
			m++;
			n--;
		}
		l++;
	}
	dest[i + 1] = '\0';
	return (dest);
}

