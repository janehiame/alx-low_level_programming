#include <stdio.h>

/**
 * main - main function
 * return: always 0
 */

int main(void)
{
	int (fib1 = 1, fib2 = 2, next);

	printf("%d, %d", fib1, fib2);

	for (int i = 3; i <= 50; i++)
	{
		next = fib1 + fib2;
		printf(", %d", next);
		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");
	return (0);
}
