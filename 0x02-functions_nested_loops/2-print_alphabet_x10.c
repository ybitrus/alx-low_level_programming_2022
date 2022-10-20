#include "main.h"

/**
 *print_alphabet_x10 -> prints the lowercase alphabets
 */

void print_alphabet_x10(void)
{
	char letters;
	int t;

	while (t++ <= 10)
	{
	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
		}
	  _putchar('\n');
	}
}
