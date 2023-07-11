#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr -concatenates all arguments of your program
 * @ac: length of the program's argument
 * @av: array of program's arguments
 * Return: a character.
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0, len = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	p = (char *) malloc((len + ac + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (*(*av + j) != '\0')
		{
			p[j] = *(*av + j);
			j++;
		}
		p[j] = '\n';
		j++;
	}
	return (p);
}
