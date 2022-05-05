#include "main.h"
/**
 * create_array - function that creates an array of characters
 * @size: integer input with the number of elements in the array
 * @c: charater inputs in the array
 * Return: 0;
 */

char *create_array(unsigned int size, char c)
{
	c = malloc(size * sizeof(c));

	if (c == 0 || c == NULL)
		return (NULL);

	int i;

	for (i = 0; i < size; i++)
		c[i];

	return (c);
}
