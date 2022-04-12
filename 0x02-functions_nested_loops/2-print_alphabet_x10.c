#include "main.h"

/**
 * print_alphabet_x10 - check description
 * Description: prints alphabets in small letter in 10 new lines
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char k;

	for (i = 0; i < 10; i++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar('\n');
		_putchar('\n');
	}
}
