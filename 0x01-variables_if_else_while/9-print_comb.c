#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always
 */

int main(void)

{
	int d = 0;

	while (d < 10)
	{
		putchar(d + '0');
	d++;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
