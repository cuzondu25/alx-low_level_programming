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
	int pst, total, chng, aux;
	int coins[] = {25, 10, 5, 2, 1};

	pst = total = chng = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		total = atoi(argv[1]);
	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[pst] != '\0')
	{
		if (total >= coins[pst])
		{
			aux = (total / coins[pst]);
			chng += aux;
			total -= coins[pst] * aux;
		}
		pst++;
	}
	printf("%d\n", chng);
	return (0);
}
