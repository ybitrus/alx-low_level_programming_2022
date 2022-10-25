#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse.
 *
 * @s: string
 * Return: string
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar([c]);
	}

	_putchar('\n');
}
