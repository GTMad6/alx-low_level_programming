#include <stdio.h>

/**
 * main - prints all arguments that it receives
 * @argc: number of command line arguments
 * @argv: array of the command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
