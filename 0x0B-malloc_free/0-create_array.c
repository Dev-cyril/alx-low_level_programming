#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of characters
 * @size: integer input with the number of elements in the array
 * @c: charater inputs in the array
 * Return: 0;
 */

char *create_array(unsigned int size, char c)
{
	char *cs;
	int i;
       
	cs = malloc(size * sizeof(c));

	if (cs == 0 || cs == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cs[i] = c;

	return (c);
}