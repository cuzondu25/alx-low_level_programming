#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * check_num - check for digit in string
 * @str: array
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - entry
 * @argc: count
 * @argv: vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int count, str_to, sum;

	sum = 0;
	count = 1;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to = atoi(argv[count]);
			sum += str_to;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
