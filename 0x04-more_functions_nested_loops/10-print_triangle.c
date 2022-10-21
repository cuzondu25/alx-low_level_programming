#include "mian.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int tr, h;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (tr = size - h; tr > 0; tr--)
				_putchar(' ');

			for (tr = 0; tr < h; tr++)
				_putchar('#');

			if (h == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
