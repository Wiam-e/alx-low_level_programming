#include "main.h"
/**
* is_prime_number - determines if integer is a prime number
* @n: number to test
* Return: 1 if n is a prime number, else 0.
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (test_pnmbr(n, n - 1));
}
/**
* test_pnmbr - recursive function tests if a number is prime 
* @n: number to test
* @i: iterator
* Return: 1 if n is prime, else 0.
*/
int test_pnmbr(int n, int i)
{
if (n % i == 0 && i > 0)
return (0);
else if (i == 1)
return (1);
else
return (test_pnmbr(n, i - 1));
}
