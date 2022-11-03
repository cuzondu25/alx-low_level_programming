#include "main.h"
/**
 * _evaluate - evaluate squareroot
 * @i: int
 * @n: int
 * Return: sqrt
 */
int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_evaluate(i + 1, n));
	else if (i * i == n)
		return (i);
	else
		return (-1);
}


/**
 * _sqrt_recursion - natural square root of a number
 * @n: num
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 0;

	if (i < 0)
		return (-1);
	else
		return (_evaluate(i, n));
}
