#include "main.h"

/**
 *print_alphabet_x10 -> prints the lowercase alphabets
 */

void print_alphabet_x10(void)
{
	int letters;
	int t;

	t = 0;

	while (t < 10)
	{
	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
		}
	t++;
	  _putchar('\n');
	}
}
