#include "main.h"
/**
 * cap_string -function that capitalizes all words in a string
 * @s: String to capitalize
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',')
		{
			s[i + 1] = uppercase(s[i + 1]);
		}
		else if (s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?')
		{
			s[i + 1] = uppercase(s[i + 1]);
		}
		else if (s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '}')
		{
			s[i + 1] = uppercase(s[i + 1]);
		}
		else if (s[i] == '{')
		{
			s[i + 1] = uppercase(s[i + 1]);
		}
		if (i == 0)
		{
			s[i] = uppercase(s[i]);
		}
		i++;
	}
	return (s);
}
/**
 * uppercase -convert to uppercase
 * @u: lowercase
 *
 * Return: uppercase
 */
char uppercase(char u)
{
	char *pu;

	pu = &u;
	if (u >= 97 && u <= 122)
	{
		*pu = u - 32;
	}
	return (u);
}
