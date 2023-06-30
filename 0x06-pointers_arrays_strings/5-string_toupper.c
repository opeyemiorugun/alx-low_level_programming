#include "main.h"
/**
 * string_toupper -converts lowercase string to uppercase string
 * @s: String
 *
 * Return: Uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j < i && s[j] != '\0'; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			s[j] = s[j] - 32;
		}
	}
	return (s);
}

