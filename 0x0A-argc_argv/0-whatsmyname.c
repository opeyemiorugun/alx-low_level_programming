#include <stdio.h>
/**
 * main -prints the name of the program
 * @argc: number of arguments to main
 * @argv: array of arguments to main
 * Return: null
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
