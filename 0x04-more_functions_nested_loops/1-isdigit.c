#include "main.h"

/**
 * _isdigit - prints digits fro 0 to 9
 * @c: input integer
 * Return: 1 if c is an ingeter and 0 if otherwise
 */

int _isdigit(int c)
{
	char i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			return (10);
		}
		else
		{
			return (0);
		}
	}
}
