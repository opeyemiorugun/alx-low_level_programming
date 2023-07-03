#include "main.h"
/**
 * leet -function that encodes a sting into 1337
 * @s: string to convert
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i = 0, c;
	char sl[5] = {'A', 'E', 'O', 'T', 'L'};
	char cl[5] = {'a', 'e', 'o', 't', 'l'};
	char nr[5] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		for (c = 0; c < 5; c++)
		{
			if (s[i] == sl[c] || s[i] == cl[c])
			{
				s[i] = nr[c];
			}
		}
		i++;
	}
	return (s);
}
