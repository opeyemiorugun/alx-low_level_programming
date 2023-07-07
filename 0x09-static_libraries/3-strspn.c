#include "main.h"
/**
 * _strspn -function that gets the length of a prefix substring.
 * @s: 1st argument
 * @accept: 2nd argument
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, equa;

	while (s[i] != '\0')
	{
		j = 0;
		equa = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				equa = 0;
			}
			j++;
		}
		if (equa == 1)
		{
			break;
		}
		i++;
	}
	return (i);
}
