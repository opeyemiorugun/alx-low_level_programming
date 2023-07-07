#include <stdio.h>
#include <stdlib.h>
/**
 * main -program that adds positive numbers
 * @argc: number of program arguments
 * @argv: array of program arguments
 * Return: 1;
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if ((*argv[i] < 48 && *argv[i] > 57))
		{
			printf("Error\n");
			break;
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}


