#include "main.h"

/**
 * _strchr - function that locates a charater string
 * @s: a string
 * @c: a character
 * Return: a apointer to the firts occurence of the charater in string
 */

char *_strchr(char *s, char c)
{
	for (*s = 0; *s != '\0'; s++)
	{
		if (*s != c)
		{
			return ('\0');
		}
	}
	return (s);
}
