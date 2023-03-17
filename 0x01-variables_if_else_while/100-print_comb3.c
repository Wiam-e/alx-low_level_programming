#include <stdio.h>
/**
*main - a program that prints all possible diff combos of two digits
*Return: 0 (Success)
*/
int main(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
for (j = i + 1; j <= 9; i++)
{
putchar(i + '0');
putchar(j + '0');
if (i < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
