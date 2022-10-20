#include "main.h"
/**
 * is_lower - check if a character is lowercase
 *@c: a character argument
 * Return: 1 if the letter is lowercase, 0 else
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
	else
		return (0);

}
