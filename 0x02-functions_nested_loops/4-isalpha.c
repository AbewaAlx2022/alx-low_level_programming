#include "main.h"

/**
 * _isalpha - checks for a char is alphabetic
 * @c: the char to be checked
 *
 * Retutn: 1 if char is letter lower or upper, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
