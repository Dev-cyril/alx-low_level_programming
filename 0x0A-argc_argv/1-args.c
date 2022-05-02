#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * argc: number of command line arguments
 * argv: array containing program commands
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
