#include <stdio.h>
#include "main.h"
/**
* main - a program to find and print the largest prime factor
* Return: 0 (Success)
*/
int main(void)
{
long int n;
n = 612852475143;
long int div = 2, ans = 0, lf;
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
printf("The largest prime factor is: %d\n", lf);
ans = 1;
break;
}
}
}
return (0);
}
