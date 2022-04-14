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
	
			if (k > 9)
			{
				_putchar(k / 10 + '0');
			}
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
