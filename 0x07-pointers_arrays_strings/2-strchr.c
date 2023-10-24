#include "main.h"
/**
  * _strchr - locate a character in a string
  * @s: string to be searched
  * @c: character to be located
  * Return: If found point to the first occurence if not found return NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++;)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
