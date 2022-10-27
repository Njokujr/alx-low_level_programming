/**
 * flip_bits - A function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: The number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int max_value = 0x01;

	while (max_value <= xor)
	{
		if (max_value & xor)
			flips++;
		max_value <<= 1;
	}
	return (flips);
}
