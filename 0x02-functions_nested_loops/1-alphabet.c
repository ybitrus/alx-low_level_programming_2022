#include "main.h"

/**
 *print_alphabet -> prints the lowercase aplphabets
 *
 *Return: 0
 */

void print_alphabet(void)
{
	int letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{

		_putchar(letters);

	}
	_puchar('\n');
}
