#include "3-calc.h"
/**
 * main -program thet performs simple operations
 *
 * @argc: number of program arguments
 * @argv: array of program arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;
	char *sign;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	
	result = get_op_func(sign)(num1, num2);
	if (!result)
	{
		printf("Error2\n");
		exit(99);
	}
	printf("%d\n", result);
	return (0);
}
