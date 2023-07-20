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
	int num1, num2;
	char *sign;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = argv[2];

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (!get_op_func(sign) || sign[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(sign)(num1, num2));
	return (0);
}
