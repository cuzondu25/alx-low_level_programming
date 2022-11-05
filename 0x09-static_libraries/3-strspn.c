#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: string to compare to
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (i);
}
