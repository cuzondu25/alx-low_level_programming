#include "main.h"
/**
 * reverse_array - reverse the content of the array
 * @a: array
 * @n: number of element of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
