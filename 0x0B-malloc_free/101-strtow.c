#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * count_word -counts the words int a sentence
 * @str: 1st argument
 * Return: number of words
 */
int count_word(char *str)
{
	unsigned int i = 0;
	int flag = 0, len = 0;

	while (str[i] != '\0')
	{
		if (flag == 1 && str[i] == ' ')
		{
			len++;
			flag = 0;
		}
		if (str[i] != ' ')
		{
			flag = 1;
		}
		i++;
		if (i == strlen(str) && flag == 1)
		{
			len++;
		}
	}
	return (len);
}
/**
 * count_d_char -counts the number of charcaters in a word.
 * @m: 1st argument
 * @str: string to be counted
 * Return: number of charcaters in a word.
 */
int count_d_char(int m, char *str)
{
	int flag = 0, len_word = 0;

	while (str[m] != '\0')
	{
		if (flag == 1 && str[m] == ' ')
			break;
		if (str[m] != ' ')
		{
			len_word++;
			flag = 1;
		}
		m++;
	}
	return (len_word);
}
/**
 * strtow -splits a string into words
 * @str: 1st argument
 * Return: a pointer to an array of strings(words)
 */
char **strtow(char *str)
{
	int j = 0, len = 0, k = 0;
	char **p;
	int flag = 0, len_word;
	if (*str == NULL || *str == "")
		return (NULL);
	len  = count_word(str);

	p = (char **) malloc(len * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (j = 0; j < len; j++)
	{
		len_word = count_d_char(k, str);
		p[j] = (char *) malloc((len_word + 1) * sizeof(int));
		if (p[j] == NULL)
		{
			return (NULL);
		}
		flag = 0;
		while (str[k] != '\0')
		{
			if (flag == 1 && str[k] == ' ')
			{
				p[j][k] = '\0';
				break;
			}
			if (str[k] != ' ')
			{
				p[j][k] = str[k];
				flag = 1;
			}
			k++;
		}
	}
	p[len] = NULL;
	return (p);
}

