#include <stdio.h>
#include "main.h"
/**
* main - a program to find and print the largest prime factor
* Return: 0 (Success)
*/
int main(void)
{
long int n;
long int div = 2, lf;
n = 612852475143;
while (n != 0)
{
if (n % div != 0)
div = div + 1;
else
{
lf = n;
n = n / div;
if (n == 1)
{
printf("The largest prime factor is: %ld\n", lf);
break;
}
}
}
return (0);
}
