#include "main.h"
/**
 * _strcmp -compare two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: the integer value of the character difference
 */
int _strcmp(char *s1, char *s2)
{
	int i, j = 0, k = 0;

	while (s1[j])
		j++;
	while (s2[k])
		k++;
	for (i = 0; i <= j || i <= k; i++)
	{
		if (s1[j - 1] == s2[k - 1])
		{
			return (0);
		}
		else if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
	}
}
