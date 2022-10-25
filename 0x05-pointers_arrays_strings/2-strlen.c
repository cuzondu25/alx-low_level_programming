#include "main.h"

/**
 * _strlen - length of srting
 * @s: string
 * Return: success 1
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
