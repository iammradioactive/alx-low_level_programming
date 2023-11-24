#include "main.h"
/**
 * flip_bits - count number of bits to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bits_count = 0;

	while (xor > 0)
	{
		bits_count += (xor & 1);
		xor >>= 1;
	}

	return (bits_count);
}
