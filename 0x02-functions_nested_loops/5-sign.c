#include "main.h"

/**
 * print_sign -print the sign of a number
 *@n: n is the number of sign to be printed
 * Return: returns 0 if n is zero, -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return	(0);
	}
	else
	{
		_putchar('-');
			return (-1);
	}
}
