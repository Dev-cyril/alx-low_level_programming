#include "main.h"

/**
 * print_last_digit - function that returns last digit
 * @r: integer input
 * Return: last digit
 */

int print_last_digit(int r)
{
	if (r >= 0)
		return (r % 10);
	else
		return ((r * -1) % 10);
}
