#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: decimal number to change
 * @index: index position to change starting from 0.
 * Return: 1 (Success), -1 (Error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned int m;

	if (index > 64)
		return (-1);

	m = index;

	while (m > 0)
	{
	i = i * 2;
	m--;
	}
	if ((*n >> index) & 1)
	*n -= i;

	return (1);
}
