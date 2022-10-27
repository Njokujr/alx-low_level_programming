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
	unsigned int flag = 0, max_value = 32768; /* 1000 0000 0000 0000 */

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max_value)
	{
		if (flag == 1 && (n & max_value) == 0)
			_putchar('0');
		else if ((n & max_value) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		max_value >>= 1;
	}
}
