#include "main.h"

/**
 * _isupper - prints upercase letter
 * @c: character
 * Return: 1 and 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
