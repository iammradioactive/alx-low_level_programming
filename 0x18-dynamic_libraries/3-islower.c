#include "main.h"
/**
  * _islower - checks for lowercase character
  * @c: The character to be checked
  * Return: 1 for true or 0 for false
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
