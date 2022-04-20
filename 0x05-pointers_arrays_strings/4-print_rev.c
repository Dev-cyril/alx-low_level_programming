#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: an input string
 * Return: void
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
		k++;

	while (k)
		_putchar(s[--k]);

	_putchar('\n');
}
