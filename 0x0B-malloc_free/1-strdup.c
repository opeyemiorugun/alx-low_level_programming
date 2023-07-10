#include "main.h"
#include <stdlib.h>
/**
 * _strdup -function that returns a pinter to a newly allocated space in
 *  memory, which contains a copy of the string given as a parameter.
 *  @str: string to be duplicated
 *  Return: NULL if str = NUll. On success function returns a pointer
 *  to the duplicated string and NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = (char *) malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
