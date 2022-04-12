#include "main.h"

/**
 * print_last_digit - function that returns last digit
 * @r: integer input
 * Return: last digit
 */

int print_last_digit(int r)
{
	int i;

	if (r >= 0)
		_putchar((r % 10) + '0');
		return (r % 10);
	else
		i = (r * -1) % 10;
		_putchar(i + '0');
		return (i);
}
