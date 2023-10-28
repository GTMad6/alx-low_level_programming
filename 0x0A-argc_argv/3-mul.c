#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of commmand line arguments
 * @argv: array that contains the command line arguments
 * Return: ALways 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf(" % d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
