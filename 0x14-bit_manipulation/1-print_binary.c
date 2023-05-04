#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_binary - function that prints a number in binary.
 * @n: decimal number.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
	{
	if (n >> 1)
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
	}
}
