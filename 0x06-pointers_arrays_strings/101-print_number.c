#include "main.h"

/**
 * print_number - print numbers chars
 * @n: intiger params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((nun / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
