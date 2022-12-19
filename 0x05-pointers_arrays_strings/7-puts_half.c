#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 *
 * @s: this is the input string
 */

void puts_half(char *s)
{
	int i, half;

	i = 0;
	while (s[i] != '\n')
		i++;
	half = i / 2;
	if (i % 2 == 1)
		half++;
	while (half < i)
	{
		_putchar(s[half]);
		half++;
	}
	_putchar('\n');
}
