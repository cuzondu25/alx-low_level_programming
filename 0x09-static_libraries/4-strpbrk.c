#include "main.h"
/**
 * _strpbrk - searches for any os a set byte
 * @s: string
 * @accept: string to compare
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++, c = *s)
	{
		for (p = accept; *p != 0; p++)
		{
			if (c == *p)
			{
				return (s);
			}
		}
	}
	return (0);
}
