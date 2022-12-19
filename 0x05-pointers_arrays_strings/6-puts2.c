#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @s: pounter to string.
 *
 * Return: void.
 */

void puts2(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
		i++;
	}
	_putchar('\n');
}
