#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_word(char *str)
{
    int len = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str == ' ')
            in_word = 0;
        else if (!in_word)
        {
            in_word = 1;
            len++;
        }
        str++;
    }
    return len;
}

int count_d_char(int m, char *str)
{
    int len_word = 0;

    while (str[m] && str[m] != ' ')
    {
        len_word++;
        m++;
    }
    return len_word;
}

char **strtow(char *str)
{
    if (str == NULL)
        return NULL;

    int len = count_word(str);
    char **p = (char **)malloc((len + 1) * sizeof(char *));

    if (p == NULL)
        return NULL;

    int j, k = 0;

    for (j = 0; j < len; j++)
    {
        // Skip leading spaces
        while (str[k] && str[k] == ' ')
            k++;

        int len_word = count_d_char(k, str);
        p[j] = (char *)malloc((len_word + 1) * sizeof(char));

        if (p[j] == NULL)
        {
            // If memory allocation fails, free previously allocated memory and return NULL
            for (int i = 0; i < j; i++)
                free(p[i]);
            free(p);
            return NULL;
        }

        int flag = 0;
        for (int i = 0; i < len_word; i++)
        {
            if (str[k] == ' ')
                break;
            if (str[k] != ' ')
            {
                p[j][i] = str[k];
                flag = 1;
            }
            k++;
        }

        if (flag)
        {
            p[j][len_word] = '\0';
            k++; // Move to the next word
        }
        else
        {
            // Free memory and decrement j if there are leading/trailing spaces without a word
            free(p[j]);
            j--;
        }
    }

    p[len] = NULL; // Null-terminate the array of strings
    return p;
}

