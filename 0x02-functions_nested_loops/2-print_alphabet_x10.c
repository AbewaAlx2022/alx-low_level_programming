#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int n = 0;
	char letter;

	while (n++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
