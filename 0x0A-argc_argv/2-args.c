#include <stdio.h>
#include "main.h"

/**
 * main -  program that prints all arguments it receives.
 * @argc: counter
 * @argv: Arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int c = 0;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);

	return (0);
}
