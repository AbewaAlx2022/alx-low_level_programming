#include <stdio.h>
#include "main.h"

/**
 * main - a program that printsthe number of arguments passed to the program
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Always return 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
