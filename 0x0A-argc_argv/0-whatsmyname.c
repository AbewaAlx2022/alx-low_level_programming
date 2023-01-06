#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: This is the argument count
 * @argv: This is the arguments vector
 *
 * Return: Always return 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
