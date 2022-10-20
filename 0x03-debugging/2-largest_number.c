#include "main.h"
/**
 * largest_number - returns the largest number
 * @a: first inter
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b) && (a > c))
	{
		if ((a != b) && (a != c))
		{
			largest = a;
		}
		else
		{
			continue;
		}
	}
	else if ((b > a) && (b > c))
	{
		if (b != c)
		{
			largest = b;
		}
		else
		{
			continue;
		}
	}
	else
	{
		largest = c;
	}
	return (largest);
}
