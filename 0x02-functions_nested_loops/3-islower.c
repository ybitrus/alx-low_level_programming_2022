#include "main.h"
/**
 * _islower - check if a the character is lowercase
 *
 * @c:  function that checks for lowercase character
 *
 * Return: returns 1 the letter is lowercase else return 0 (success)
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
	else
		return (0);

}
