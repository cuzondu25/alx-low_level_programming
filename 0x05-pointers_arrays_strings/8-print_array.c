#include "main.h"
/**
 * print_array - print n element of an array of integers
 * @a: array
 * @n: number of element
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}
