#include "main.h"
/**
 * _islower - function that checks for lowercase
 *
 * @c: parameter to be printed
 *
 * Return: 1 if it is a lowercase
 * and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
