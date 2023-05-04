#include "main.h"
/**
 * binary_to_uint -  function that converts a binary number to an unsgd int
 * @b:  pointing to a string of 0 and 1 chars
 * Return: converted number,
 * otherwise 0 if b is null, or not 0 nor 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int b2, n = 0;
	int l = 0;

	if (b == NULL)
		return (0);

	while (b[l] != '\0')
	l++;

	for (l--, b2 = 1; l >= 0; l--, b2 = b2 * 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
		return (0);
		}
		else if (b[l] == 1)
		{
		n = n + b2;
		}
	}
	return (n);
}
