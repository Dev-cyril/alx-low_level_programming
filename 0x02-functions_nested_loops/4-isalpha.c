#include "main.h"

/**
 *  _isalpha - function that reurn 1 whwn the letter c is either in upper
 *  or lower case
 *  @c: An input character
 *  Return: 1 or 0 in otherwise.
 */

int _isalpha(int c)
{
	char up, low;
	int i = 0;

	for (up = 'A'; up <= 'Z'; up++)
	{
		for (low = 'a'; low <= 'z'; low++)
		{
			if (low == c || up == C)
				i = 1;
		}
	}
	return (i);
}
