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
	int i, sum = 0, num;
	char *ch;

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &ch, 10);
		if (*argv[i] < 48 || *argv[i] > 57 || *ch != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}


