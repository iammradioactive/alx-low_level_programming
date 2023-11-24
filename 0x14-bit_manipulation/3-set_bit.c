#include "main.h"
/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer
 * @index: index of bit to set
 * Return: 1 if success, -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
