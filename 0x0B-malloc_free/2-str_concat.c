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
	int i = 0, j = 0, k = 0, m = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ptr = (char *) malloc(sizeof(char) * (i + j));
	if (ptr == NULL)
		return (NULL);
	while (s1[k] != '\0')
	{
		ptr[k] = s1[k];
		k++;
	}
	while (s2[m] != '\0')
	{
		ptr[k] = s2[m];
		k++;
		m++;
	}
	ptr[k] = '\0';
	return (ptr);
}

