#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int i, n3, n2 = 2, n1 = 1;

	for (i = 3; i < 50; i++)
		n3 = n1 + n2;
		printf("%d, ", n3);
		n1 = n2;
		n2 = n3;;
	return (0);
}
