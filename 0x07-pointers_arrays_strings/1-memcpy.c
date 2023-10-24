#include "main.h"
/**
  * *_memcpy - copy number of byte from @src mem area to @dest mem area
  * @n: number of byte to copy
  * @src: mem area to copy from
  * @dest: mem area to copy to
  * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
