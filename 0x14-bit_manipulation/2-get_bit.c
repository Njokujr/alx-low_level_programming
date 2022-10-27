#include "main.h"
#include <stdio.h>

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: The number to get bit from
 * @index: The index where the bit get at
 * Return: The value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if
		(index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if
		((n & (1 << index)) == 0)
		return (0);

	return (1);
}
