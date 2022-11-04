#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: the factorial
 * Return: n > 0 - the factorial n, n < 1 error indicator
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);
	return (result);
}
