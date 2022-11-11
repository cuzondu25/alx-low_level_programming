#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - create an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	i = 0;
	if (min > max)
		return (0);
	array = malloc((max - min + 1) * sizeof(int));
	if (!array)
		return (0);
	while (i <= max - min)
		array[i++] = min++;
	return (array);
}
