#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char dec;

	for (dec = 'z'; dec >= 'a'; dec--)
	{
		putchar(dec);
	}
	putchar('\n');

	return (0);
}
