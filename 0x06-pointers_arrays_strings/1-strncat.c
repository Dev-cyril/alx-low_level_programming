#include "main.h"

/**
 * _strncat - a function that concatenates two strings based on a condition
 * @dest: an input string
 * @scr: and input string
 * @n: and input integer
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *str = dest, *str2 = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = str2;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
