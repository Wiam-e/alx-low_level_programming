#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that prints the binary representation of a number
 * @n: decimal number.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}
	else
	{
		if (n >> 1)
		print_binary(n >> 1);
		printf("%lu", n & 1);
	}
}
