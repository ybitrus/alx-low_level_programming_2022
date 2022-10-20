include "main.h"

/**
 *
 * main: check _isalpha function that checks for alphabetic character
 *
 * Returns 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
