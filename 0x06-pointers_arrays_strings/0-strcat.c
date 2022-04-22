#include "main.h"

/**
 * _strcat - a fumction that concatenates two strings
 * @dest: a string input
 * @src: a string input
 * Return: a aconcatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *str = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = src++;

	*dest = '\0';

	return (str);
}
