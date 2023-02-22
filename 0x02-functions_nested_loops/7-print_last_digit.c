#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @num: input number as an integer
 *
 * Return: last digit
 */
int print_last_digit(int i)
{
	int num;

	num = i % 10;
	if (num < 0)
	{
		_putchar(-num + 48);
		return (-num);
	}
	else
	{
		_putchar(num +48);
	}
}
