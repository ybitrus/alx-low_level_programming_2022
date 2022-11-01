#include "main.h"
/**
 *_memcpy - a function
 *@dest: memory
 *@src: copied memory
 *@n: number of byte
 *
 *Return: Returning memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
