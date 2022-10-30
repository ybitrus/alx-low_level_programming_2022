#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers
 * @n: first number
 */

void print_to_98(int n)
{
	int n = 0;
	if (n >= 98)
	{
		while (n > 98)
			_putchar("%d, ", n--);
		_putchar("%d\n", n);
	}

	else
	{
		while (n < 98)
			_putchar("%d, ", n++);
		_putchar("%d\n", n);
	}
}
