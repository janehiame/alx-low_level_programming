#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @num: input number as an integer
 *
 * Return: k
 */

int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (n < 0)
		k = -k;
	return (k);
	_putchar('\n');
}
