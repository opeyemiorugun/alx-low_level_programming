#include "main.h"
#include <stdlib>
/**
 * str_concat -function taht concatenates two strings
 * @s1: 1st argument
 * @s2: 2nd argument
 * Return: The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1, followed by the contents
 * of s2, and null terminated. If NULL is passed, treat it as an empty
 * string. Returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, j = 0, k = 0, m = 0, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	len = i + j;
	ptr = (char *) malloc(sizeof(char) * (i + j));
	if (ptr == NULL)
		return (NULL);
	while (len--)
	{
		if (s1[k] != '\0' && k < i)
		{
			ptr[k] = s1[k];
		}
		if (s1[k] == '\0' || k > i)
		{
			ptr[k] = s2[m];
			m++;
		}
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}

