#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory
 * Return: void *p
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
