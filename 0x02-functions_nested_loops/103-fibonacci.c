#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int i;
	long int n3, n2 = 2, n1 = 1, sum = 2;

	for(i = 2; i < 50; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if ((n3 % 2) == 0 && n3 < 4000000)
			sum += n3;
	}
	printf("%ld\n", sum);
	return (0);
}
