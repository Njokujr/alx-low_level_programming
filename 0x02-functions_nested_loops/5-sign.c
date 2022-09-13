#include "main.h"
/**
 * print_sign - Determines whether an integer is positive, negative or zero.
 * @n: the number to be checked.
 * Return: 1 if positive, 0 if zero, -1 if negative, / if not a digit.
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
