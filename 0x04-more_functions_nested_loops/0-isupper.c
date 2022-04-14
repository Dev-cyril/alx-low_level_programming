#include "main.h"

/**
 * _isupper - prints letters in ipper case
 * @c: integer input
 * Return: 1 if c is in upper case and 0 if otherwise
 */

int _isupper(int c)
{
	int i;
	int check = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			check = 1;
		else
			check = 0;
	}
	return (check);
}
