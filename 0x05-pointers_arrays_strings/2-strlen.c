#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string length
 * Return: return length.
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
		return (l);
}
