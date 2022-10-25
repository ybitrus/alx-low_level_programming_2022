#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: string
 * Return: return value
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
i		str++;
	}
	_putchar('\n');
}
