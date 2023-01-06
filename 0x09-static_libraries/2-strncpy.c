#include "main.h"
/**
 * _strncpy - functions that copies a string
 * @dest: string copy
 * @src: source string
 * @n: mac num of byte copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n;  i++)
		dest[i] = '\0';
	return (dest);
}
