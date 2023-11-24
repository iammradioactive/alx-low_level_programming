#include "main.h"
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to the bit
 * @index: index of bit to clear
 * Return: 1 if success or -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
