#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings passed in an argument
 * @separator: strings to be printed between strings
 * @n: number of strings passed
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);
	for (i = 0;i < n; i++)
	{
		str = va_arg(strings, char *);
		printf("%s", str);
		if (separator && i < n - 1)
			printf("%s", separator);
		if (str == NULL)
			printf("nil");
	}
	printf("\n");

	va_end(strings);
}
