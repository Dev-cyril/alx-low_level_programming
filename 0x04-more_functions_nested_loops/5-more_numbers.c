#include "main.h"

/**
 * more_numbers - prints numbers from 1-14 10 times
 * Return: void
 */

void more_numbers(void)
{
	int i, k;

	for (i = 0; i <= 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
	
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
