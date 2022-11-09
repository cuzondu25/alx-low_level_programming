#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strlen - string length
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * str_concat - concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: s1
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	size = (_strlen(s1) + _strlen(s2) + 1);
	dest = (char *) malloc(sizeof(char) * size);

	if (dest == 0)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(dest + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dest + i) = *(s2 + j);
		i++;
	}
	return (dest);
}
