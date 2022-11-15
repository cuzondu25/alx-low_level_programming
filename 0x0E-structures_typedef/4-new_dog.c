#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * _strcopy - copies a string
 * @dest: destination
 * @src: source
 * Return: poiner dest
 */
char *_strcopy(char *dest, char *src)
{
	int dex;

	dex = 0;

	for (dex = 0; src[dex]; dex++)
		dest[dex] = src[dex];
	dest[dex] = '\0';
	return (dest);
}
/**
 * new_dog - createsa new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);
	dogg->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogg->name == NULL)
	{
		free(dogg);
		return (NULL);
	}
	dogg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogg->owner == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}
	dogg->name = _strcopy(dogg->name, name);
	dogg->age = age;
	dogg->owner = _strcopy(dogg->owner, owner);
	return (dogg);
}
