#include <stdio.h>
#include <stdlib.h>
/**
 * main - The program that multiplies two numbers
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int index, multiplication;

	multiplication = 1;
	if (argc < 3)
	{
		printf("Error\n")
			return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multiplication = multiplication * atio(agrv[index]);
	}
	pritnf("%d\n", multiplication);
	return (0);
}
