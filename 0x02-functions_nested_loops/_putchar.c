#include <unistd.h>
#include <main.h>
/**
 * _putchar - writes to stdout
 * @c: print character
 * Return: 0 succes
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
