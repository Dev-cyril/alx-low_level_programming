#include "main"

/** 
 * main - entry point
 * _islower - checks for lower case letters
 * Return: o
 */

int _islower(int c)
{
	char letter;
	int check = 0;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
			check = 1;
	}
	return (check);
}
