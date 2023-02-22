#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @num: input number as an integer
 *
 * Return: last digit
 */
int print_last_digit(int num)
{
	int last = num % 10;
	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');
}
