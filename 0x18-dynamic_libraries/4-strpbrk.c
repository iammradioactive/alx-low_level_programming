#include "main.h"
/**
  * _strpbrk - searches string for any of a set of bytes
  * @s: string to be searched
  * @accept: set of bytes to be searched for
  * Return: point to a matched byte if set is matched
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
