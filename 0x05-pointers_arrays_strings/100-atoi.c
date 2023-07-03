#include "main.h"
/**
 * _atoi -converts a string to an integer
 * @s: String
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		if (num > 0 && ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)))
		{
			break;
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			num = (num * 10) + (s[i] - 48);
		}
		i++;
	}
	return (num * sign);
}
