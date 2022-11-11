#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - allocatess memory fo an array
 * @nmemb: number of arrray element
 * @size: size of each array element
 * Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
