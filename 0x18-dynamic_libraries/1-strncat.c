#include "main.h"
/**
 * _strncat - concatenate two string
 * @dest: string to be appended upon
 * @src: string to be complated at end of dest
 * @n: integer parameter to compare index to
 * Return: new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
