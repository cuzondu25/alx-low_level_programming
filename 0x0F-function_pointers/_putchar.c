#include <stdio.h>
#include "function_pointers.h"

/**
 * _putchar - prints a charater
 * @c: character to print
 * Return: wrute
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
