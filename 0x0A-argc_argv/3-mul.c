#include <stdio.h>
#include <stdlib.h>
/**
 * main -program that multiplies two numbers
 * @argc: number of program arguments
 * @argv: arrayof program arguments
 * Return: NULL
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 1)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (1);
}
