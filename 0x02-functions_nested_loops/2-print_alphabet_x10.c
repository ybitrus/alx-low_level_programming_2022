#include "main.h"

/**
 *print_alphabet_x10 -> prints the lowercase alphabets
 *
 *Return: Always 0
 */

void print_alphabet_x10(void)
{
	char letters;
	int t;

	for (t = 0; t < 10; t++)
	{
	for (letters = 'a'; letters <= 'z'; t++)
		{
		_putchar(letters);
		return (0);
		}
	  _putchar('\n');
	}
}
