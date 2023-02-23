#include "main.h"

/**
 * largest_number - returns thelargest of 3 numbers
 * @a: first integer
 * @b: second number
 * @c:third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = c;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c )
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
return (largest);
}
