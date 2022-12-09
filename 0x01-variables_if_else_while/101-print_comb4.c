#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = '0';
	int n = '0';
	int j = '0';

	for (j = '0'; j <= '9'; j++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				if (!((i == n) || (n == j) || (n > i) || (j > n)))
				{

					putchar(j);
					putchar(n);
					putchar(i);
					if (!(i == '9' && j == '7' && n == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
