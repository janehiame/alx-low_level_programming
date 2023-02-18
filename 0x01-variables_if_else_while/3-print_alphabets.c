#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
		if (x == 'c' || x == 'y' || x == 'o')
			continue;
		putchar(x);
	}

	putchar('\n');

	return (0);
}
