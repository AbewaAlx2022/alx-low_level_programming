#include "main.h"

/**
 * print_last_digit -> prints the last digit
 * @n: the passed args
 * Return: the lasu digit
 */

int print_last_digit(int n)
{
	int X;

	if (n < 0)
	{
		n = -n;
		X = n % 10;
		_putchar(X + '0');
	}
	return (X);
}
