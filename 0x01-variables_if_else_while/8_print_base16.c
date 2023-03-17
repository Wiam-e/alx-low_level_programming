#include <stdio.h>
/**
*main - a program that prints all numbers in base 16
*Retyrn: 0 (Success)
*/
int main(void)
{
char c = 'a';
int i;
while (i < 10)
{
putchar(i + '0');
i++;
}
while (c <='f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
