#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 0; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
