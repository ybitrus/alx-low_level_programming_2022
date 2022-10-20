#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: the number
 * Return: value of the last digit
 */

int print_last_digit(int n)

{
	int ld;

	ld = (n % 10);

	if (ld < 0)
	{
	ld = (-1 * ld);
	}
	_putchar(ld + '0');
	return (ld);

}
