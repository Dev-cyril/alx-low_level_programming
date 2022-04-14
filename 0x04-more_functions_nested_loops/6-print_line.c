#include "main.h"

/**
 * print_line - prints line
 * @n: integer input
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
