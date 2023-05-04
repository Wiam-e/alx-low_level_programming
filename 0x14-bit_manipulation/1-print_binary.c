#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1, otherwise -1 (Error).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
