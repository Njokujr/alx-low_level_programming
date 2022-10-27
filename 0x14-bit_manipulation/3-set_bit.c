#include "main.h"
#include <stdio.h>

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index.
 * @n: The number to set bit in
 * @index: Is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_value = 0x01;

	max_value <<= index;
	if
		(max_value == 0)
		return (-1);

	*n |= max_value;
	return (1);
}
