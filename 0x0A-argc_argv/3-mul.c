#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: counter
 * @argv: arguument vector
 *
 * Return: return 0 if true 1 if false
 */

int main(int argc, char *argv[])
{
	int num1, num2,

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	printf("Error\n");

	return (1);
}
