#include "main.h"
#include <stdio.h>

/**
 * flip_bits - A function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: The number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
