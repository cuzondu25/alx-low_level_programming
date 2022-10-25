#include "main.h"

/**
 * swap_int - swap a with b and vice versa
 * @a: number to swap
 * @b: number to swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
