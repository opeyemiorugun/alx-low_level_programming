#include <stdio.h>
#include <stdlib.h>
/**
 * main -program that prints the minimum number of coins to make change
 * for an amount of money. cents- 25, 10, 5, 2 and 1.
 * @argc: number of program arguments
 * @argv: array of program arguments
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int change = 0, y;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	y = atoi(argv[1]);
	if (y < 0)
		printf("0\n");
	else
	{
		while (y > 0)
		{
			if (y == 1)
				y -= 1;
			if (y >= 2 && y < 5)
				y -= 2;
			if (y >= 5 && y < 10)
				y -= 5;
			if (y >= 10 && y < 25)
				y -= 10;
			if (y >= 25)
				y -= 25;
			change += 1;
		}
	}
	printf("%d\n", change);
	return (0);
}




