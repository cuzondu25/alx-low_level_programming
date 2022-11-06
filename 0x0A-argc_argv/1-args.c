#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	(void)argv;

	printf("%d\n", i);
	return (0);
}
