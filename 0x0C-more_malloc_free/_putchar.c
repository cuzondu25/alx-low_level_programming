#include <unistd.h>
/**
 * _putchar - prints a character
 * @c: charatcter
 * Return: write
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
