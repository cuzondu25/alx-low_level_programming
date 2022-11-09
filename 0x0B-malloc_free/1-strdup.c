#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strlen - length of string
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
 * _strcpy - copy an array
 * @src: source
 * @dest: destination
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strdup - pointer to an allocated memory space
 * @str: stirng
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *destn;
	unsigned int size;

	if (str == 0)
		return (NULL);

	size = _strlen(str) + 1;
	destn = (char *) malloc(sizeof(char) * size);

	if (destn == 0)
		return (NULL);
	_strcpy(destn, str);
	return (destn);
}
