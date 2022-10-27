#include "main.h"
#include <stdio.h>

/**
 * print_binary - A  function that prints the binary representation of a number
 * without % or /
 * @n: The number to be printed
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
