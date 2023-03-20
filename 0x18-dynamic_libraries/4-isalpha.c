#include "main.h"

/**
 * _isalpha - checks for alphabetical letters
 * @c: a charter to be checke on
 * Return: 1 if char is letter lower or upper, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
