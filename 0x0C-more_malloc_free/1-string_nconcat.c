#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int len1, len2, tlen, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n > len2)
		n = len2;

	tlen = len1 + n;

	mem = malloc(tlen + 1);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < tlen; i++)
		if (i < len1)
			mem[i] = s1[i];
		else
			mem[i] = s2[i - len1];

	mem[i] = '\0';

	return (mem);
}
