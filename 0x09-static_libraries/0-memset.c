#include "main.h"

/**
 * _memset - fill memory of a constant byte
 * @s: pointer
 * @b: character
 * @n: integer
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;

	*ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
