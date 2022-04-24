#include "main.h"

/**
 * rot13 - a function that encodes a string into rot13
 * @s: an input string
 * Return: encode string
 */
char *rot13(char *s)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*s == alphabet[i])
			{
				*s = rot13[i];
				break;
			}
		}
		s++;
	}
	return (s);
}

