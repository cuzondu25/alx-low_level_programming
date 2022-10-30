#include "main.h"
/**
 * print_alphabet_x10 - prints a - z x10
 */
void print_alphabet_x10(void)
{
	int k;
	char i;

	for (k = 0; k < 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
