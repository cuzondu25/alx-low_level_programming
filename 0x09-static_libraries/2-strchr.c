#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character to be located
 * Return: c
 */
char *_strchr(char *s, char c)
{
	if (*s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
