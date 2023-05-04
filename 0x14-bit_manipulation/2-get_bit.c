#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to test
 * @index: index starting from 0
 * Return: Value of bit at index, otherwise -1 (Error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;

	if (n == 0 && index < 64)
		return (0);
	else if (index > 64)
		return (-1);

	m = n >> index;

	return (m & 1);
}
