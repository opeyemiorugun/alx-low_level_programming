#include "main.h"
/**
 * _strchr -locates a charcter in a string
 * @s: String
 * @c: character to locate
 *
 * Return: Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p_SC;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p_SC = &s[i];
			break;
		}
		else
		{
			return (NULL);
		}
		i++;
	}
	return (p_SC);
}
