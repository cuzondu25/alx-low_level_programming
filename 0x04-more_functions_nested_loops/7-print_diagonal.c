#include "main.h"

/**
 * print_diagonal - printa diagonal
 * @n:	number of times
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < x; y++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}