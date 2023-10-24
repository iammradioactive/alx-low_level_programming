#include "main.h"
/**
  * _strchr - locate a character in a string
  * @s: string to be searched
  * @c: character to be located
  * Return: If found point to the first occurence if not found return NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++;)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
