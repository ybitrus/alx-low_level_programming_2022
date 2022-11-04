#include "main.h"

/**
 * _sqrt_recursion - return the natural square root
 *  @n: num of the square root
 *
 *  Return: retuning values
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursion to find square root
 * @n: num to calculated
 * @i: the itrator
 *
 * Return: resulting square root
 */


int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
