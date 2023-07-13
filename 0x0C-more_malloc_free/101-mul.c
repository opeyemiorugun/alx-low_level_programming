#include <stdio.h>
#include <stdlib.h>
/**
 * main -program that multiplies two positive numbers
 * @argc: length of program's argument
 * @argv: array of program's arguments
 * Return: NUll
 */
int main(int argc, char *argv[])
{
	unsigned int mul, num1, num2;
	char *ch1, *ch2;

	num1 = strtol(argv[1], &ch1, 10);
	num2 = strtol(argv[2], &ch2, 10);
	if (argc != 3 || *ch1 != '\0' || *ch2 != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}

