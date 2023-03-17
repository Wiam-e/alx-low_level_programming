#include <stdio.h>
/**
*main - a program that prints base 16 numbers
*Return: 0 (Success)
*/
int main(void)
{
char c;
int i;
c = 'a';
i = 0;
while (i < 10)
{
putchar(i + '0');
i++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
