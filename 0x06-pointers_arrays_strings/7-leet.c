#include "main.h"
/**
 * leet -function that encodes a sting into 1337
 * @s: string to convert
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		i++;
	}
	return (s);
}
