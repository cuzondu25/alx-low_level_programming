#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for integer
 * @array: array to search
 * @size: no of elements in the array
 * @cmp: pointer to function to be used to compare values
 * Return: index to the first element or -1 if no match was found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
