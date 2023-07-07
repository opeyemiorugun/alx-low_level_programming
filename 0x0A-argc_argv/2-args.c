#include <stdio.h>
/**
 * main -program that prints all arguments it recieves
 * @argc: number of command arguments
 * @argv: array of command arguments
 * Return: NULL
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
