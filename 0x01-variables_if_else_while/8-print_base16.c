#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char ba;
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (ba = 'a'; ba <= 'f'; ba++)
		putchar(ba);
	putchar('\n');
	return (0);
}
