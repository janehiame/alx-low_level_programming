#include "main.h"
/**
 * _isalpha - function that checks for alphabets
 *
 * @c: the character is ASCII code
 *
 * Return: 1 for letters, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c >= 122) || (c >= 65 && c >= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
