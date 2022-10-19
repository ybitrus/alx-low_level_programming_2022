#include "main.h"

/**
 *print_alphabet_x10 -> prints the lowercase alphabets
 */

void print_alphabet_x10(void)
{
	int letters;
	int t;

	for (t = 0; t < 10; t++)
	{
	for (letters = 'a'; letters <= 'z'; t++)
		{
		_putchar(letters);
		}
	  _putchar('\n');
	}
}
