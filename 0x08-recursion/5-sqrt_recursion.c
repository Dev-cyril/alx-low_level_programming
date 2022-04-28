#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - a function that returns the natural square root of numbers
 * @n: integer input
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);

	return (_sqrt(n, (1 / 2)));
}

/**
 * _sqrt - find square root
 * @a: previous value
 * @root: square root value
 * Return: the square root
 */
int _sqrt(int a, int root)
{
	return (a *= _sqrt(a, root));
}
