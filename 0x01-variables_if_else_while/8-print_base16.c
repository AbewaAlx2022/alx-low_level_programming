#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			putchar(n + '0');
		} else
		{
			putchar(x);
			x++;
		}
	}
	putchar('\n');
	return (0);
}
