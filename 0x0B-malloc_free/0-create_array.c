#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: number of element of array
 * @c: element
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int p;

	if (size == 0)
		return (NULL);

	buffer = (char *) malloc(sizeof(char) * size);

	if (buffer == 0)
		return (NULL);
	p = 0;
	while (p < size)
	{
		*(buffer + p) = c;
		p++;
	}
	return (buffer);
}
