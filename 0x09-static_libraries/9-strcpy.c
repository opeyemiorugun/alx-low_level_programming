#include "main.h"
/**
 * *_strcpy -function that prints the copies of the string
 * @dest: 1st argument
 * @src: 2nd argument
 *
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		*(dest + l) = *(src + l);
	}
	*(dest + l) = '\0';
	return (dest);
}
