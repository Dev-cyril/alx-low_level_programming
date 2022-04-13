#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long n3, n2 = 2, n1 = 1;

	printf("%lu, %lu, ", n1, n2);
	for (i = 2; i < 92; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf("%lu, ", n3);
	}
	n1 += n3;
	n2 = n1 + n3;

	for (i = 92; i < 98; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if (i == 97)
			printf("%lu\n", n3);
		else
			printf("%lu, ", n3);
	}
	return (0);
}
