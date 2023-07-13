#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -function that concatenates two strings.
 * @s1: 1st argument
 * @s2: 2nd argument
 * @n: number of bytes to concatenate from s2
 * Return: returned pointer shall point to a newly allocated space in
 * memory, which contains s1, followed by the first n bytes of s2, and
 * null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i = 0, len2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s1);
	len2 = (strlen(s2) + 1);
	if (n >= len2)
		n = len2 - 1;
	p = malloc(sizeof(char) * (len + 1 + n));
	if (p == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (n--)
	{
		p[i] = *s2;
		s2++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
