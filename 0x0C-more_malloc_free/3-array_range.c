#include "main.h"
#include "string.h"
/**
  * array_range - creates array of integers
  * @min: starting int
  * @max: maximum int
  * Return: array
 */

int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
