#include "main.h"

/**
 * print_sign - prints the signs upon comparision and returns a value
 * @n: an input number
 * Return: based on the comparitor
 */

int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		ret = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		ret = 0;
		_putchar('0');
	}
	else
	{
		ret = -1;
		_putchar('-');
	}
	return (ret);
}
