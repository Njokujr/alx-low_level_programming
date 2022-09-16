#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - test that the function positive_or_negative
 * and gives the correct output when given a case of 0
 * @i: input variable to the function
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);

	return (0);
}
