#include "main.h"

/**
 *main - Entry point
 * print_alphabet - prints alphabet from a - z followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
