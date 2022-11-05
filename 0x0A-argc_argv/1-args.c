#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: Counter
 * @argv: Arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%d", argc - 1);

}
