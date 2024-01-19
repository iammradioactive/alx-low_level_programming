#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: The character to be checked
 * Return: 1 for true, 0 for false
*/

int _isalpha(int c)
{
	if ((c > 64 && c < 98) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}
