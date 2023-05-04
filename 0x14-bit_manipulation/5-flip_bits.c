#include "main.h"
/**
 * flip_bits - function that returns the number of bits needed to flip
 * to get from one number to another.
 * @n: first number.
 * @m: second number to flip to.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nf_bit;

	for (nf_bit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		nf_bit++;
	}

	return (nf_bit);
}
