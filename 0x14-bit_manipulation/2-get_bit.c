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
	unsigned long int max_value = 0x01;

	max_value <<= index;
	if
		(max_value == 0)
		return (-1);

	if
		((n & max_value))
		return (1);
	else
		return (0);
}
