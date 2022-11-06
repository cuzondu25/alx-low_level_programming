#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", (a * b));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
