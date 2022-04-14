#include "main.h"

/**
 * _isdigit - prints digits fro 0 to 9
 * @c: input integer
 * Return: 1 if c is an ingeter and 0 if otherwise
 */

int _isdigit(int c)
{
	int i;
	int check = 0;

	for (i = 0; i <= 9; i++)
	{
		if (i == c)
		{
			check = 1;
		}
		else
		{
			check = 0;
		}
	}
	return (check);
}
