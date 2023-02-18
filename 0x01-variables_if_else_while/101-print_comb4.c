#include <stdio.h>

/**
 * main -main function
 *
 * Return: always 0
 */
int main(void)
{
	int x;
	int y;
	int k;

	for (x = 0 ; x < 30 ; x++)
	{
		for (y = 1 ; y < 10 ; y++)
		{
			for (k = 2 ; k < 10 ; k++)
			{
				if (x < y && y < k)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(k + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
