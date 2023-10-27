#include <stdio.h>
/**
 * main - prints name of program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
