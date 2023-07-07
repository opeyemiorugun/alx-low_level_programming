#include <stdio.h>
/**
 * main -program that prints thenumber of arguments passed into it
 * @argc: number of command arguments
 * @argv: array of command arguments
 * Return: NULL
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
