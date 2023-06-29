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
	int j = 0, k = 0, c;

	while (s1[j] != '\0' && s2[k] != '\0')
	{
		if (s1[j] != s2[k])
		{
			c = s1[j] - s2[k];
			break;
		}
		else
		{
			c = s1[j] - s2[k];
		}
		j++;
		k++;
	}
	return (c);
}
