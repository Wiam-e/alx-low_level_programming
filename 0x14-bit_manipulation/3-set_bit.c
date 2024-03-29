#include "main.h"
/**
 * set_bit - unction that sets the value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: index starting from 0 of the bit desired to set.
 * Return: 1 (Success), otherwise -1 (Error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	p = 1;
	while (index > 0)
	{
		index--;
		p = p * 2;
	}
	*n += p;
	return (1);
}
