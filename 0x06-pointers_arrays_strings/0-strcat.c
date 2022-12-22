#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 *
 * Return: return poiner to @dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[len])
		len++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[len++] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
