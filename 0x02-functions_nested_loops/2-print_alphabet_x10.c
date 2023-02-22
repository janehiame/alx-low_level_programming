#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabets
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 26)
		{
			_putchar(c);
			c++;
			j++;
		}
		_putchar('\n');
		i++;
	}
}

